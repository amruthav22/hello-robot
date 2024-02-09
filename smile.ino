#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);  // set the LCD address to 0x3F for a 16 chars and 2 line display

// make some custom characters:
byte Heart[8] = {
0b00100,
0b01110,
0b01110,
0b01110,
0b01110,
0b01110,
0b01110,
0b00100
};



byte Lock[8] = {
0b00100,
0b01110,
0b01110,
0b01110,
0b01110,
0b01110,
0b01110,
0b00100
};
byte s1[8] =
{
0b00000,
0b00000,
0b00000,
0b00000,
0b10000,
0b01111,
0b00111,
0b00011
};
byte s2[8] =
{
0b00000,
0b00000,
0b11111,
0b11111,
0b00000,
0b00000,
0b00000,
0b00000
};
byte s3[8] =
{
0b00000,
0b00000,
0b11111,
0b11111,
0b00000,
0b00000,
0b00000,
0b00000
};
byte s4[8] =
{
0b00000,
0b00000,
0b00000,
0b00000,
0b00001,
0b11110,
0b11100,
0b11000
};
byte s5[8] =
{
0b11111,
0b11111,
0b00000,
0b00000,
0b00000,
0b00000,
0b00000,
0b00000
};
byte s6[8] =
{
0b11111,
0b11111,
0b00000,
0b00000,
0b00000,
0b00000,
0b00000,
0b00000
};

void setup() 
{
  lcd.init();
  // Make sure backlight is on       
  lcd.backlight();

  // create a new characters
  lcd.createChar(0, Heart);
  
  lcd.createChar(1, Lock);

  lcd.createChar(2,s1);
  lcd.createChar(3,s2);
  lcd.createChar(4,s3);
  lcd.createChar(5,s4);
  lcd.createChar(6,s5);
  lcd.createChar(7,s6);
  // Clears the LCD screen
  lcd.clear();

}

// Print All the custom characters
void loop() 
{ 
  lcd.setCursor(7, 0);
  lcd.write(0);
  lcd.setCursor(8, 0);
  lcd.write(1);
  lcd.setCursor(5, 0);
  lcd.write(2);
  lcd.setCursor(7, 1);
  lcd.write(3);
  lcd.setCursor(8, 1);
  lcd.write(4);
  lcd.setCursor(10, 0);
  lcd.write(5);
  lcd.setCursor(6, 1);
  lcd.write(6);
  lcd.setCursor(9, 1);
  lcd.write(7);
}