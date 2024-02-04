// C++ code
//
int led1=1;
int led2=2;
int led3=4;
int led4=5;
int sw1=3;
int sw2=6;
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
   pinMode(sw1, INPUT);
  pinMode(sw2, INPUT);
}

void loop()
{
  if(digitalRead(sw1)){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    
  }
     else{
       digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
     }
   if(digitalRead(sw2)){
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    
  }
     else{
       digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
     }
}