// This program blinks three LEDS each for a number of times
// Create variables to hold the pins
int L1 = 13;
int L2 = 12;
int L3 = 11;

void setup()
{
  pinMode(L1,OUTPUT);
  pinMode(L2,OUTPUT);
  pinMode(L3,OUTPUT);
}

void blink(int led_pin,int blink_count){
  
  const int BLINK_DELAY = 1000;
  
  for(int i = 0;i<blink_count;i++){
    digitalWrite(led_pin,HIGH);
    delay(BLINK_DELAY);
    digitalWrite(led_pin,LOW);
    delay(BLINK_DELAY);
  }
}

void loop()
{
  // blink red LED five times
  blink(L1,5);
  //blink green led 10 times
  blink(L2,10);
  //blink blue led 15 times
  blink(L3,15);
}

