#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 10, 9, 8, 7);

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("2 D4 TB KEL 4");
  lcd.setCursor(0, 1);
  lcd.print("Telekomunikasi");
}

void loop() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 13; j++) {
      lcd.scrollDisplayRight();
      delay(100);
    }
    delay(1000);
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 13; j++) {
      lcd.scrollDisplayLeft();
      delay(100);
    }
    delay(1000);
  }

  for (int i = 0; i < 3; i++) {
    lcd.setCursor(0, 0);
    lcd.print("             "); 
    lcd.setCursor(0, 1);
    lcd.print("             "); 
    delay(500);
    lcd.setCursor(0, 0);
    lcd.print("2 D4 TB KEL 4");
    lcd.setCursor(0, 1);
    lcd.print("Telekomunikasi");
    delay(500);
  }
}
