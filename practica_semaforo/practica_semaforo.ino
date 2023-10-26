int led_Red=11;
int led_Yellow=10;
int led_Green=9;

int time_delay=2000;
void setup()
{
  pinMode(led_Red, OUTPUT);
  pinMode(led_Yellow, OUTPUT);
  pinMode(led_Green, OUTPUT);
}

void loop()
{
  digitalWrite(led_Red, HIGH);
  delay (time_delay); 
  digitalWrite(led_Red, LOW);
  digitalWrite(led_Yellow, HIGH);
  delay (time_delay); 
  digitalWrite(led_Yellow, LOW);
  digitalWrite(led_Green, HIGH);
  delay (time_delay); 
  digitalWrite(led_Green, LOW);
  digitalWrite(led_Yellow, HIGH);
  delay (time_delay); 
  digitalWrite(led_Yellow, LOW);
}
