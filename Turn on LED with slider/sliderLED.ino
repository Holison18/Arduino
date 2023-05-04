// C++ code
int ledPin = 13;
int switchPin = 5;


void setup()
{
	// set pinModes
  	pinMode(ledPin,OUTPUT);
  	pinMode(switchPin,INPUT);
}

void loop()
{
  if(digitalRead(switchPin)){
    digitalWrite(ledPin,HIGH);
  }else{
    digitalWrite(ledPin,LOW);
  }
}