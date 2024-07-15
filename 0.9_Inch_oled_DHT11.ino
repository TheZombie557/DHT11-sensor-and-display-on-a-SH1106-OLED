#include <Wire.h>
#include <U8g2lib.h>
#include "DHT.h"

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32
#define SCREEN_RESET 4 // Reset pin # (or -1 if not connected)

U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, SCREEN_RESET);

#define dht_apin A0
DHT dht(dht_apin, DHT11);

void setup() {
  Serial.begin(9600);
  delay(500);
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);

  u8g2.begin();
  u8g2.enableUTF8Print();
}

void loop() {
  dht.begin();

  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  Serial.print("Current humidity = ");
  Serial.print(humidity);
  Serial.print("%  ");
  Serial.print("temperature = ");
  Serial.print(temperature);
  Serial.println("C  ");

  u8g2.firstPage();
  do {
    u8g2.setFont(u8g2_font_ncenB14_tr);
    u8g2.drawStr(0, 20, "Humidity: ");
    u8g2.setCursor(100, 20);
    u8g2.print(humidity);
    u8g2.print("%");

    u8g2.setFont(u8g2_font_ncenB14_tr);
    u8g2.drawStr(0, 40, "Temp: ");
    u8g2.setCursor(100, 40);
    u8g2.print(temperature);
    u8g2.print("C");
  } while (u8g2.nextPage());

  delay(5000);
}
