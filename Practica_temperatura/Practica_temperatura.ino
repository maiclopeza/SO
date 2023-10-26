int temp_in;
int led=13;
int fan=12;
String pin_tmp="A0";
float vol;
float temp_out;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(fan, OUTPUT);
  Serial.begin(9600);
  digitalWrite(led,LOW);
  digitalWrite(fan,LOW);
}

void loop()
{
  temp_in=analogRead(A0);
  /*Serial.print("Temperatura_in:");
  Serial.println(temp_in);*/
  temp_out = (temp_in*(500.0/1023.0))-50.0;
  Serial.print("Temperatura_out:");
  Serial.println(temp_out);
  
  if(temp_out < 5){
  	digitalWrite(led,HIGH);
    delay(500);
  }else{
    if(temp_out > 6 && temp_out < 25){
  	digitalWrite(led,LOW);
    }
  }
  
  if(temp_out > 25){
  	digitalWrite(fan,HIGH);
    digitalWrite(led,HIGH);
  }else{
  	digitalWrite(fan,LOW);
    digitalWrite(led,LOW);
  }
  delay(2000);
  
}
