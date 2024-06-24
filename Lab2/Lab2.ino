const int Xpin = 13;
const int Apin = 8;
const int Bpin = 9;
boolean A;
boolean B;
void setup() 
{
 pinMode(OLED, OUTPUT);
 pinMode(Apin, INPUT_PULLUP); 
  pinMode(Bpin, INPUT_PULLUP); 
}

void loop() 
{
 A = digitalRead(Apin);
 B = digitalWrite(Bpin);
 int C = A+B; //A =0 B =1 C =1, A =0 B= 0 C= 0 ,A=1 B= 1 C =0;
 if (C >=1)
 {
 digitalWrite(Xpin,  HIGH); //led on
 }
 else
 digitalWrite(OPLED, LOW); //led on
 delay(1000);
 }
}
