// C++ code
//
#include <LiquidCrystal.h>
#include <string.h>
int rs=7;
int en=8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;

float first_no;
float sec_no;
String op;
float ans;

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup()
{
  Serial.begin(9600);
  lcd.begin(16,2);
}

void loop()
{
  lcd.setCursor(0,0);
  lcd.print("Welcome");
  delay(500);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Input 1st No.");
  while(Serial.available() == 0){
    
  }
  first_no = Serial.parseFloat();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Input 2nd No.");
  while(Serial.available() == 0){
    
  }
  sec_no = Serial.parseFloat();
  lcd.clear();
  lcd.setCursor(0,0);
  
  lcd.print("Input(+,-,*,/)");
  while(Serial.available() == 0){
    
   }
  op = Serial.readString();
  
  if(op == "+"){
    ans = first_no + sec_no;
  }
  if(op == "-"){
    ans = first_no - sec_no;
  }
  if(op == "*"){
    ans = first_no * sec_no;
  }
  if(op == "/"){
    ans = first_no / sec_no;
  }
  lcd.clear();
  lcd.setCursor(0,0);
  
  lcd.print(first_no);
  lcd.print(op);
  lcd.print(sec_no);
  lcd.print("=");
  lcd.print(ans);
  
  delay(4000);
  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("Thank you!");
  delay(500);
  lcd.clear();
}
