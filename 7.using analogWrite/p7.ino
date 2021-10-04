// C++ code
// (0-255)
//digitalWrite
//0-0volt and 255-5volts = HIGH
//adjusting brightness of led
int redPin=9;
int bright=0;
void setup()
{
  pinMode(redPin, OUTPUT);
}

void loop()
{
  analogWrite(redPin,bright);
  delay(1000);
  
  analogWrite(redPin,bright+50);
  delay(1000);
  
  analogWrite(redPin,bright+100);
  delay(1000);
  
  analogWrite(redPin,bright+150);
  delay(1000);
  
  analogWrite(redPin,bright+200);
  delay(1000);
  
   analogWrite(redPin,bright+255);
  delay(1000);
  
}