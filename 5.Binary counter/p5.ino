// C++ code
//red led
//Binary Counter

int blueLed=13;
int redLed=12;
int greenLed=11;
int yellowLed=10;
int time =1000;
void setup()
{
  pinMode(redLed, OUTPUT);
}
//morse code for sos(save our ship)
void loop()
{// 0
  digitalWrite(yellowLed, LOW);
  digitalWrite(greenLed, LOW);
  digitalWrite(redLed, LOW);
  digitalWrite(blueLed, LOW);
  delay(time);
  
  // 1
  digitalWrite(yellowLed, LOW);
  digitalWrite(greenLed, LOW);
  digitalWrite(redLed, LOW);
  digitalWrite(blueLed, HIGH);
  delay(time);
  
  // 1
  digitalWrite(yellowLed,LOW);
  digitalWrite(greenLed, LOW);
  digitalWrite(redLed, HIGH);
  digitalWrite(blueLed, LOW);
  delay(time);
  
  // 3
  digitalWrite(yellowLed, LOW);
  digitalWrite(greenLed, LOW);
  digitalWrite(redLed, HIGH);
  digitalWrite(blueLed, HIGH);
  delay(time);
  
  // 4
  digitalWrite(yellowLed, LOW);
  digitalWrite(greenLed, HIGH);
  digitalWrite(redLed, LOW);
  digitalWrite(blueLed,LOW);
  delay(time);
  
  // 5
  digitalWrite(yellowLed,LOW);
  digitalWrite(greenLed, HIGH);
  digitalWrite(redLed, LOW);
  digitalWrite(blueLed, HIGH);
  delay(time);
  
  // 6
  digitalWrite(yellowLed,LOW);
  digitalWrite(greenLed, HIGH);
  digitalWrite(redLed, HIGH);
  digitalWrite(blueLed,LOW);
  delay(time);
  
  // 7
  digitalWrite(yellowLed, LOW);
  digitalWrite(greenLed, HIGH);
  digitalWrite(redLed, HIGH);
  digitalWrite(blueLed, HIGH);
  delay(time);
  
  // 8
  digitalWrite(yellowLed, HIGH);
  digitalWrite(greenLed, LOW);
  digitalWrite(redLed, LOW);
  digitalWrite(blueLed, LOW);
  delay(time);
  
  // 9
  digitalWrite(yellowLed, HIGH);
  digitalWrite(greenLed, LOW);
  digitalWrite(redLed, LOW);
  digitalWrite(blueLed, HIGH);
  delay(time);
  
  // 10
  digitalWrite(yellowLed, HIGH);
  digitalWrite(greenLed, LOW);
  digitalWrite(redLed, HIGH);
  digitalWrite(blueLed, LOW);
  delay(time);
  
  // 11
  digitalWrite(yellowLed, HIGH);
  digitalWrite(greenLed, LOW);
  digitalWrite(redLed, HIGH);
  digitalWrite(blueLed, HIGH);
  delay(time);
  
  // 12
  digitalWrite(yellowLed, HIGH);
  digitalWrite(greenLed, LOW);
  digitalWrite(redLed, LOW);
  digitalWrite(blueLed, LOW);
  delay(time);
  
  // 13
  digitalWrite(yellowLed, HIGH);
  digitalWrite(greenLed, HIGH);
  digitalWrite(redLed, LOW);
  digitalWrite(blueLed, LOW);
  delay(time);
 
  // 14
  digitalWrite(yellowLed, HIGH);
  digitalWrite(greenLed, HIGH);
  digitalWrite(redLed, LOW);
  digitalWrite(blueLed, HIGH);
  delay(time);
  
  // 15
  digitalWrite(yellowLed, HIGH);
  digitalWrite(greenLed, HIGH);
  digitalWrite(redLed, HIGH);
  digitalWrite(blueLed, HIGH);
  delay(time);

}


