void setup() {
  // put your setup code here, to run once:
pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

//S
for (int i = 0; i < 3; ++i){
digitalWrite(8,HIGH);
delay(500);
digitalWrite(8,LOW);
delay(500);
}
delay(500);
//O
for (int i = 0; i < 3; ++i){
digitalWrite(8,HIGH);
delay(250);
digitalWrite(8,LOW);
delay(250);
}
delay(500);
//S
for (int i = 0; i < 3; ++i){
digitalWrite(8,HIGH);
delay(500);
digitalWrite(8,LOW);
delay(500);
}
//repeat
delay(2000);
}
