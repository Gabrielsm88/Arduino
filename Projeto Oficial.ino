#include <WiFi.h>
#include <PubSubClient.h>
#include <DHT.h>
#include <Wire.h>
#include <U8g2lib.h>

// Definições de pinos e parâmetros
#define DHTPIN 18
#define DHTTYPE DHT11
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define SCREEN_ADDRESS 0x3C
#define LED_PIN 2
#define PORTA_PIN 5

// Configuração do OLED
U8G2_SSD1306_128X64_NONAME_F_SW_I2C u8g2(U8G2_R0, SCL, SDA, U8X8_PIN_NONE);

// Variáveis globais
const int vet = 10;
float temp[vet];
float humi[vet];
float mediaTemp = 0;
float mediaHumi = 0;
float somaTemp = 0;
float somaHumi = 0;
bool estado_sensor;
long millisatual = 0;
int intervalo = 15000;
const char* ssid = "SALA 10";
const char* password = "info@134";
WiFiClient espClient;
const char* mqtt_server = "broker.hivemq.com";
const int mqtt_porta = 1883;
const char* led_topico = "led1";
const char* porta_topico = "Porta";
const char* retorno_led = "retled";
PubSubClient client(espClient);
DHT dht(DHTPIN, DHTTYPE);

//
estado_led = "OFF";
estado_porta = "Desconhecido";

// Função para configurar a conexão Wi-Fi
void setup_wifi() {
  delay(10);
  Serial.println();
  Serial.print("Conectando a ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi conectado");
  Serial.println("Endereço IP: ");
  Serial.println(WiFi.localIP());
}

// Função para reconectar ao broker MQTT caso a conexão seja perdida
void reconnect() {
  while (!client.connected()) {
    Serial.print("Tentando se reconectar ao MQTT...");
    if (client.connect("ESP32Client")) {
      Serial.println("Conectado");
      client.subscribe(led_topico);
      client.subscribe(porta_topico);
    } else {
      Serial.print("Falhou, rc=");
      Serial.println(" Tentando novamente em 5 segundos");
      delay(5000);
    }
  }
}

// Função chamada sempre que uma mensagem MQTT é recebida
void callback(char* topic, byte* payload, unsigned int length) {
  Serial.print("Mensagem recebida no tópico: ");
  Serial.println(topic);

  if (strcmp(topic, led_topico) == 0) {
    if (payload[0] == '1') {
      digitalWrite(LED_PIN, HIGH);
      estado_led = "ON";
      Serial.println("LED 1 ligado");
      client.publish(retorno_led, "LED ligado");
    } else if (payload[0] == '0') {
      digitalWrite(LED_PIN, LOW);
      Serial.println("LED 1 desligado");
      client.publish(retorno_led, "LED desligado");
    }
  } else if (strcmp(topic, porta_topico) == 0) {
    if (payload[0] == '1') {
      estado_porta = "Aberta";
      Serial.println("Porta aberta");
    } else if (payload[0] == '0') {
      estado_porta = "Fechada";
      Serial.println("Porta fechada");
    }
  }
}

void setup() {
  Serial.begin(115200);
  dht.begin();
  u8g2.begin();
  pinMode(LED_PIN, OUTPUT);
  pinMode(PORTA_PIN, INPUT_PULLUP);
  setup_wifi();
  client.setServer(mqtt_server, mqtt_porta);
  client.setCallback(callback);
}

void loop() {
  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_ncenB08_tr);
  //temperatura
  u8g2.drawFrame(1, 2, 40, 37);
  u8g2.setCursor(5, 24);
  u8g2.print(String(somaTemp / vet) + "ºC");
  //umidade
  u8g2.drawFrame(1, 40, 45, 20);
  u8g2.setCursor(5, 53);
  u8g2.print(String(somaHumi / vet) + "%");
  //led
  u8g2.drawFrame(48, 33, 75, 28);
  u8g2.setCursor(75, 45);
  u8g2.print("LED");
  u8g2.setCursor(75, 58);
  u8g2.print(estado_led);
  //porta
  u8g2.drawFrame(43, 2, 82, 29);
  u8g2.setCursor(65, 15);
  u8g2.print("PORTA");
  u8g2.setCursor(62, 27);
  u8g2.print(estado_porta);

  u8g2.sendBuffer();

  somaTemp = 0;
  somaHumi = 0;
  mediaTemp = 0;
  mediaHumi = 0;

  for (int i = 0; i < vet; i++) {
    delay(2000);
    humi[i] = dht.readHumidity();
    temp[i] = dht.readTemperature();
    if (isnan(humi[i]) || isnan(temp[i])) {
      Serial.println("Falha ao ler o Sensor!");
      continue;
    }
    somaTemp += temp[i];
    somaHumi += humi[i];
  }

  Serial.println("Temperatura média de: " + String(somaTemp / vet) + "C, e umidade média de: " + String(somaHumi / vet));

  unsigned long contadorMillis = millis();

  if (!client.connected()) {
    reconnect();
  }
  client.loop();

  if (contadorMillis - millisatual > intervalo) {
    millisatual = contadorMillis;

    estado_sensor = digitalRead(PORTA_PIN);
    if (estado_sensor == 1) {
      Serial.println("Porta aberta");
      client.publish(porta_topico, "1");
    } else {
      Serial.println("Porta fechada");
      client.publish(porta_topico, "0");
    }
  }
}