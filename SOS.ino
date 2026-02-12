int dot = 100;
int dash = 300;
int space = 1000;
int repeat = 2000;
int ledPin = 7;

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for (int i = 0; i < 3; ++i){
digitalWrite(ledPin,HIGH);
delay(dot);
digitalWrite(ledPin,LOW);
delay(dot);
}
delay(space);
for (int i = 0; i < 3; ++i){
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(dash);
}
delay(space);
for (int i = 0; i < 3; ++i)
{digitalWrite(ledPin,HIGH);
delay(dot);
digitalWrite(ledPin,LOW);
delay(dot);
}
