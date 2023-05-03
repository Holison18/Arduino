//Binary Counter with LEDS
int L1 = 13,L2 = 12,L3 = 11,L4 = 10;
const int DELAY_TIME = 1000;

void setup()
{
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
}

void loop()
{
  //0000
  digitalWrite(L1,LOW);
  digitalWrite(L2,LOW);
  digitalWrite(L3,LOW);
  digitalWrite(L4,LOW);
  delay(DELAY_TIME);
  
  //0001
  digitalWrite(L1,LOW);
  digitalWrite(L2,LOW);
  digitalWrite(L3,LOW);
  digitalWrite(L4,HIGH);
  delay(DELAY_TIME);
    
  //0010
  digitalWrite(L1,LOW);
  digitalWrite(L2,LOW);
  digitalWrite(L3,HIGH);
  digitalWrite(L4,LOW);
  delay(DELAY_TIME);
    
  //0011
  digitalWrite(L1,LOW);
  digitalWrite(L2,LOW);
  digitalWrite(L3,HIGH);
  digitalWrite(L4,HIGH);
  delay(DELAY_TIME);
  
  //0100
  digitalWrite(L1,LOW);
  digitalWrite(L2,HIGH);
  digitalWrite(L3,LOW);
  digitalWrite(L4,LOW);
  delay(DELAY_TIME);
  
  //0101
  digitalWrite(L1,LOW);
  digitalWrite(L2,HIGH);
  digitalWrite(L3,LOW);
  digitalWrite(L4,HIGH);
  delay(DELAY_TIME);
  
  //0110
  digitalWrite(L1,LOW);
  digitalWrite(L2,HIGH);
  digitalWrite(L3,HIGH);
  digitalWrite(L4,LOW);
  delay(DELAY_TIME);
  
  //0111
  digitalWrite(L1,LOW);
  digitalWrite(L2,HIGH);
  digitalWrite(L3,HIGH);
  digitalWrite(L4,HIGH);
  delay(DELAY_TIME);
  
  //1000
  digitalWrite(L1,HIGH);
  digitalWrite(L2,LOW);
  digitalWrite(L3,LOW);
  digitalWrite(L4,LOW);
  delay(DELAY_TIME);
  
  //1001
  digitalWrite(L1,HIGH);
  digitalWrite(L2,LOW);
  digitalWrite(L3,LOW);
  digitalWrite(L4,HIGH);
  delay(DELAY_TIME);
  
  //1010
  digitalWrite(L1,HIGH);
  digitalWrite(L2,LOW);
  digitalWrite(L3,HIGH);
  digitalWrite(L4,LOW);
  delay(DELAY_TIME);
  
  //1011
  digitalWrite(L1,HIGH);
  digitalWrite(L2,LOW);
  digitalWrite(L3,HIGH);
  digitalWrite(L4,HIGH);
  delay(DELAY_TIME);
  
  //1100
  digitalWrite(L1,HIGH);
  digitalWrite(L2,HIGH);
  digitalWrite(L3,LOW);
  digitalWrite(L4,LOW);
  delay(DELAY_TIME);
  
  //1101
  digitalWrite(L1,HIGH);
  digitalWrite(L2,HIGH);
  digitalWrite(L3,LOW);
  digitalWrite(L4,HIGH);
  delay(DELAY_TIME);
  
  //1110
  digitalWrite(L1,HIGH);
  digitalWrite(L2,HIGH);
  digitalWrite(L3,HIGH);
  digitalWrite(L4,LOW);
  delay(DELAY_TIME);
  
  //1111
  digitalWrite(L1,HIGH);
  digitalWrite(L2,HIGH);
  digitalWrite(L3,HIGH);
  digitalWrite(L4,HIGH);
  delay(DELAY_TIME);
}