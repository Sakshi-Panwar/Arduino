// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{// led(L) open
  digitalWrite(13, HIGH);
  delay(100);
  
  digitalWrite(13, LOW);
  delay(100);
  
}