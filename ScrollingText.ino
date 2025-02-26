#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("Hello, World");
}

void loop() {
  lcd.setCursor(0,1);
  lcd.print("5171          ");
  delay(500);

  for(int i=0; i<13; i++){
    lcd.scrollDisplayLeft();
    delay(100);
  }
  delay(1000);
  for(int i=0; i<13; i++){
    lcd.scrollDisplayRight();
    delay(100);
  }
  delay(1000);
  for(int i=0; i<13; i++){
    lcd.scrollDisplayLeft();
    delay(100);
  }
  delay(1000);
}
