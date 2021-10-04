// C++ code
//red led
//variables
int redLed=13;
float pi=3.14;
int dit=100;
int dah=500 ;
String namw="sakshi";

void setup()
{
  pinMode(redLed, OUTPUT);
}
//morse code for sos(save our ship)
void loop()
{// dit
  digitalWrite(redLed, HIGH);
  delay(dit);
  digitalWrite(redLed, LOW);
  delay(dit);
  
  digitalWrite(redLed, HIGH);
  delay(dit);
  digitalWrite(redLed, LOW);
  delay(dit);
  
    digitalWrite(redLed, HIGH);
  delay(dit);
  digitalWrite(redLed, LOW);
  delay(dit);
  
  
  delay(1000);
  
  // dot
  
  digitalWrite(redLed, HIGH);
  delay(dah);
  digitalWrite(redLed, LOW);
  delay(dah);
  
   digitalWrite(redLed, HIGH);
  delay(dah);
  digitalWrite(redLed, LOW);
  delay(dah);
  
  
   digitalWrite(redLed, HIGH);
  delay(dah);
  digitalWrite(redLed, LOW);
  delay(dah);
  

  delay(1000);
// dit
 digitalWrite(redLed, HIGH);
  delay(dit);
  digitalWrite(redLed, LOW);
  delay(dit);
  
  digitalWrite(redLed, HIGH);
  delay(dit);
  digitalWrite(redLed, LOW);
  delay(dit);
  
    digitalWrite(redLed, HIGH);
  delay(dit);
  digitalWrite(redLed, LOW);
  delay(dit);
  
  delay(1000);
}


