// C++ code
// (0-255)
//digitalWrite
//0-0volt and 255-5volts = HIGH
//adjusting brightness of led
int redPin=9;
int bright=127;
void setup()
{
  pinMode(redPin, OUTPUT);
}

void loop()
{
  analogWrite(redPin,bright);
 
  
}