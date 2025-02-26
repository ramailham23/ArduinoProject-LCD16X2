#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 10, 9, 8, 7);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
 int i;
 lcd.setCursor(0,0);
 lcd.print("HALO");
 for(i=0; i<12; ++i){
  delay(100);
  lcd.scrollDisplayRight();
 }
 delay(100);
 lcd.clear();
 lcd.setCursor(0,1);
 lcd.print("HALO");
 for(i=0; i<12; ++i){
  lcd.scrollDisplayRight();
  delay(100);
 }
 lcd.clear();
}
