/*
   This is the sample code for controlling 8 LEDs
   using 74595 Shift Registers

   This code was written by Sachin Soni for techiesms YouTube channel

   Watch out it's complete tutorial on our YouTube channel
   https://www.YouTube.com/techiesms
*/
#define dataPin 14
#define latchPin 12
#define clockPin 13
uint16_t i;

void setup() {
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(latchPin, OUTPUT);
  // put your setup code here, to run once:
}

void loop()
{
  i = 255;
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, i);
  digitalWrite(latchPin, HIGH);
  delay(1000);

  i = 0;
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, i);
  digitalWrite(latchPin, HIGH);
  delay(1000);
  
  for ( i = 0; i <= 255; i++)
  {
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, i);
    digitalWrite(latchPin, HIGH);
    delay(50);
  }




  // put your main code here, to run repeatedly:
}
