#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  lcd.init();
  lcd.clear();
  lcd.backlight();
  Serial.begin(9600);

}

void loop() {
  lcd.clear();
  lcd.setCursor(5,0);
  if(Serial.available(5)){
  int a=Serial.peiseInt();
  lcd.print("a");
  }
  }
