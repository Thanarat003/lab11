const int OPLED = 13;
const int INLED = 8;
boolean inputpin;
void setup() 
{
  Serial.begin(9600);
  
}

void loop() 
{
  int sensor = analogRead(A0);
  Serial.println(sensor);
  delay(3000);
  
}
