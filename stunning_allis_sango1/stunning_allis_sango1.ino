int btn1 = 10;
int btn2 = 9;
int btn3 = 8;

int redLED = 7;
int yellowLED = 6;
int greenLED = 5;

int btn1State;
int btn2State;
int btn3State;

int crct1State;
int crct2State;
int crct3State;

void setup(){
  pinMode(btn1,INPUT);
  pinMode(btn2,INPUT);
  pinMode(btn3,INPUT);
  pinMode(redLED,INPUT);
  pinMode(yellowLED,INPUT);
  pinMode(greenLED,INPUT);
}

void loop(){
  btn1State = digitalRead(btn1);
  btn2State = digitalRead(btn2);
  btn3State = digitalRead(btn3);
  
  if(btn1State == LOW){
    if(crct1State == LOW){
      crct1State = HIGH;
      digitalWrite(redLED,HIGH);
      digitalWrite(yellowLED,LOW);
      digitalWrite(greenLED,LOW);
    }else{
      crct1State = LOW;
    }
  }
  
  if(btn2State == LOW){
    if(crct2State == LOW){
      crct2State = HIGH;
      digitalWrite(redLED,LOW);
      digitalWrite(yellowLED,HIGH);
      digitalWrite(greenLED,LOW);
    }else{
      crct2State = LOW;
    }
  }
  
  if(btn3State == LOW){
    if(crct3State == LOW){
      crct3State = HIGH;
      digitalWrite(redLED,LOW);
      digitalWrite(yellowLED,LOW);
      digitalWrite(greenLED,HIGH);
    }else{
      crct3State = LOW;
    }
  }
  
}