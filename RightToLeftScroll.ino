#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 10, 9, 8, 7);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
 int i;
 lcd.setCursor(0,0);
 lcd.print("2 D4 TB");
 for(i=0; i<16; ++i){
  delay(100);
  lcd.scrollDisplayRight();
 }
 delay(100);
 lcd.clear();
 lcd.setCursor(16,1);
 lcd.print("2 D4 TB");
 for(i=0; i<26; ++i){
  lcd.scrollDisplayLeft();
  delay(100);
 }
 lcd.clear();
}
