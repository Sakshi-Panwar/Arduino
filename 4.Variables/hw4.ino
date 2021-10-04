// C++ code
//red led
//home work

int redLed=13;
int greenLed=12;
int yellowLed=11;
int speed =100;
void setup()
{
  pinMode(redLed, OUTPUT);
}
//morse code for sos(save our ship)
void loop()
{// red led
  digitalWrite(redLed, HIGH);
  delay(speed);
  digitalWrite(redLed, LOW);
  delay(speed);
  
 digitalWrite(redLed, HIGH);
  delay(speed);
  digitalWrite(redLed, LOW);
  delay(speed);
  
    digitalWrite(redLed, HIGH);
  delay(speed);
  digitalWrite(redLed, LOW);
  delay(speed);
  
  
  delay(1000);
  
  // green
  
 digitalWrite(greenLed, HIGH);
  delay(speed*10);
  digitalWrite(greenLed, LOW);
  delay(speed*10);
  
    digitalWrite(greenLed, HIGH);
  delay(speed*10);
  digitalWrite(greenLed, LOW);
  delay(speed*10);
  
  
   digitalWrite(greenLed, HIGH);
  delay(speed*10);
  digitalWrite(greenLed, LOW);
  delay(speed*10);
  

  delay(1000);
// yellow led
  digitalWrite(yellowLed, HIGH);
  delay(speed*15);
  digitalWrite(yellowLed, LOW);
  delay(speed*15);
  
  digitalWrite(yellowLed, HIGH);
  delay(speed*15);
  digitalWrite(yellowLed, LOW);
  delay(speed*15);
  
   digitalWrite(yellowLed, HIGH);
  delay(speed*15);
  digitalWrite(yellowLed, LOW);
  delay(speed*15);
  
  delay(1000);
}


