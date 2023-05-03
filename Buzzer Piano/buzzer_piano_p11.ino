// initialize pin values
int b1=2,b2=3,b3=4,b4=5,b5=6,b6=7,b7=8,b8=9;
int buzzer = 13;

void setup()
{
  // Push button pin modes
  pinMode(b1,INPUT);
  pinMode(b2,INPUT);
  pinMode(b3,INPUT);
  pinMode(b4,INPUT);
  pinMode(b5,INPUT);
  pinMode(b6,INPUT);
  pinMode(b7,INPUT);
  pinMode(b8,INPUT);
  
  
  // set buzzer
  pinMode(buzzer,OUTPUT);
}

void loop()
{
  if(digitalRead(b1)){
    tone(buzzer,300,100);
  }else if(digitalRead(b2)){
    tone(buzzer,400,100);
  }else if(digitalRead(b3)){
    tone(buzzer,500,100);
  }else if(digitalRead(b4)){
    tone(buzzer,600,100);
  }else if(digitalRead(b5)){
    tone(buzzer,700,100);
  }else if(digitalRead(b6)){
    tone(buzzer,800,100);
  }else if(digitalRead(b7)){
    tone(buzzer,900,100);
  }else if(digitalRead(b8)){
    tone(buzzer,1000,100);
  }
  
  delay(10);
}