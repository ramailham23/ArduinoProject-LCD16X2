#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 10, 9, 8, 7);

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Hello, World!");
  lcd.setCursor(0, 1);
  lcd.print("5171");
}

void loop() {
  for (int i = 0; i < 13; i++) {
    lcd.scrollDisplayLeft();
    delay(100);
  }
  delay(1000);

  for (int i = 0; i < 13; i++) {
    lcd.scrollDisplayRight();
    delay(100);
  }
  delay(1000);

  for (int i = 0; i < 13; i++) {
    lcd.scrollDisplayLeft();
    delay(100);
  }
  delay(1000);
}
