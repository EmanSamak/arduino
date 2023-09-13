//File name: lab01.ino
//Description: use push buttons with digital inputs to turn
 //an LED on and off
//***********************************************************/

int ledPin5 = 5;
int buttonApin9 = 2;
//int buttonBpin8 = 8;
byte leds = 0;
void setup()

{
 pinMode(ledPin5, OUTPUT);
}
void loop()
{
 if (digitalRead(buttonApin9) == LOW)
 {
 digitalWrite(ledPin5, LOW);
 }
 else{
  digitalWrite(ledPin5, HIGH);
 }
 //if (digitalRead(buttonBpin8) == LOW)
 //{
 //digitalWrite(ledPin5, LOW);}
}