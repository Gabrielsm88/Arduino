#include <DHT.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// CONFIGURAÇÃO DOS SENSORES
#define DHT11_PIN 2
#define DHT22_PIN 21
#define NUM_LEITURAS 10

DHT dht11(DHT11_PIN, DHT11);
DHT dht22(DHT22_PIN, DHT22);

// DISPLAY LCD 
LiquidCrystal_I2C lcd(0x3F, 16, 2); 

void setup() {
  Serial.begin(9600);
  dht11.begin();
  dht22.begin();
  lcd.init();
  lcd.backlight();

  Serial.println("Inicializando sensores DHT11, DHT22 e LCD...");
  lcd.setCursor(0, 0);
  lcd.print("Inicializando...");
  delay(2000);
}

void loop() {
  float somaTemp11 = 0, somaHumi11 = 0;
  float somaTemp22 = 0, somaHumi22 = 0;

  for (int i = 0; i < NUM_LEITURAS; i++) {
    float t11 = dht11.readTemperature();
    float h11 = dht11.readHumidity();
    float t22 = dht22.readTemperature();
    float h22 = dht22.readHumidity();

    if (!isnan(t11)) somaTemp11 += t11;
    if (!isnan(h11)) somaHumi11 += h11;

    if (!isnan(t22)) somaTemp22 += t22;
    if (!isnan(h22)) somaHumi22 += h22;

    delay(300);
  }

  float mediaTemp11 = somaTemp11 / NUM_LEITURAS;
  float mediaHumi11 = somaHumi11 / NUM_LEITURAS;
  float mediaTemp22 = somaTemp22 / NUM_LEITURAS;
  float mediaHumi22 = somaHumi22 / NUM_LEITURAS;
  float mediaTempF22 = mediaTemp22 * 1.8 + 32;

  // Serial Monitor
  Serial.println("========== Leitura Média ==========");
  Serial.println(">> DHT11");
  Serial.print("Temperatura: ");
  Serial.print(mediaTemp11);
  Serial.println(" °C");
  Serial.print("Umidade: ");
  Serial.print(mediaHumi11);
  Serial.println(" %");

  Serial.println(">> DHT22");
  Serial.print("Temperatura: ");
  Serial.print(mediaTemp22);
  Serial.print(" °C ~ ");
  Serial.print(mediaTempF22);
  Serial.println(" °F");
  Serial.print("Umidade: ");
  Serial.print(mediaHumi22);
  Serial.println(" %");
  Serial.println("===================================");

  // Exibição no LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("T22:");
  lcd.print(mediaTemp22, 1);
  lcd.print("C ");
  lcd.print(mediaHumi22, 0);
  lcd.print("%");

  lcd.setCursor(0, 1);
  lcd.print("T11:");
  lcd.print(mediaTemp11, 1);
  lcd.print("C ");
  lcd.print(mediaHumi11, 0);
  lcd.print("%");

  delay(4000);
}
