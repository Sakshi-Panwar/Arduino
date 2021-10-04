// C++ code
//

int j=1;
int waitT=760;
String myString1="Circle of radius = ";
String myString2=" is  ";
void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
 
  Serial.println(myString1);
  Serial.print(j);
  Serial.print(myString2);
  Serial.print(3.14*j*j);

  
   j=j+1;
  delay(waitT);
}