int luz_hab = 11;
int luz_hab2 = 12;
int luz_hab3 = 13;
int a = 1000;
char opt;
void setup() {
  pinMode(luz_hab,OUTPUT);
  digitalWrite(luz_hab,LOW);
  Serial.begin(9600);//9600 Baudios, unidad de medida de transferencia de pulso electrico

  pinMode(luz_hab2,OUTPUT);
  digitalWrite(luz_hab2,LOW);
  Serial.begin(9600);

  pinMode(luz_hab3,OUTPUT);
  digitalWrite(luz_hab3,LOW);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0){
    opt=Serial.read();
    if(opt=='1'){
      Serial.write("luz_hab ON");
      digitalWrite(luz_hab,HIGH);
    }else {
    if(opt=='2'){
         Serial.write("luz_hab OFF");
         digitalWrite(luz_hab,LOW);
       }
    }

    if(opt=='3'){
      Serial.write("luz_hab2 ON");
      digitalWrite(luz_hab2,HIGH);
    }else {
    if(opt=='4'){
         Serial.write("luz_hab2 OFF");
         digitalWrite(luz_hab2,LOW);
       }
    }

    if(opt=='5'){
      Serial.write("luz_hab3 ON");
      digitalWrite(luz_hab3,HIGH);
    }else {
    if(opt=='6'){
         Serial.write("luz_hab3 OFF");
         digitalWrite(luz_hab3,LOW);
       }
    }

    if(opt=='7'){
      Serial.write("luz_hab_all ON");
      digitalWrite(luz_hab,HIGH);
      digitalWrite(luz_hab2,HIGH);
      digitalWrite(luz_hab3,HIGH);
    }else {
    if(opt=='8'){
         Serial.write("luz_hab_all OFF");
         digitalWrite(luz_hab,LOW);
         digitalWrite(luz_hab2,LOW);
         digitalWrite(luz_hab3,LOW);
       }
    }

    if(opt=='9'){
         Serial.write("luz_hab_all OFF");
         digitalWrite(luz_hab,HIGH);
         digitalWrite(luz_hab2,HIGH);
         digitalWrite(luz_hab3,HIGH);
      	 delay(a);
      	 digitalWrite(luz_hab,LOW);
         digitalWrite(luz_hab2,LOW);
         digitalWrite(luz_hab3,LOW);
      	 delay(a);
      	 digitalWrite(luz_hab,HIGH);
         digitalWrite(luz_hab2,HIGH);
         digitalWrite(luz_hab3,HIGH);
      	 delay(a);
      	 digitalWrite(luz_hab,LOW);
         digitalWrite(luz_hab2,LOW);
         digitalWrite(luz_hab3,LOW);
       }


  }

}