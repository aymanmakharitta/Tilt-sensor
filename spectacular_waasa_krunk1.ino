// C++ code
//
int sensor=5;
int mottor=3;
void setup()
{
pinMode(sensor,INPUT);
  pinMode(mottor,OUTPUT);
}

void loop()
{
  if (digitalRead(sensor)==HIGH){
  digitalWrite(mottor,HIGH);}
  else {
 digitalWrite(mottor,LOW); }
}