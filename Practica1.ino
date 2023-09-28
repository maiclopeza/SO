// C++ code
//
int led1=13;
int time_delay=1000;
void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(led1, HIGH);
  delay (time_delay); //1 seg=1000
  digitalWrite(led1, LOW);
  delay (time_delay); //1 seg=1000
  
}