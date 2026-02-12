int p1 = 5;
int p2 = 4;
int p3 = 3;
int p4 = 2;
int io = 300;
int start = 1000;
int pause = 500;
void setup() {
  // put your setup code here, to run once:
pinMode(p1,OUTPUT);
pinMode(p2,OUTPUT);
pinMode(p3,OUTPUT);
pinMode(p4,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(p1,HIGH);
delay(io);
digitalWrite(p1,LOW);
digitalWrite(p2,HIGH);
delay(io);
digitalWrite(p2,LOW);
digitalWrite(p3,HIGH);
delay(io);
digitalWrite(p3,LOW);
digitalWrite(p4,HIGH);
delay(io);
digitalWrite(p4,LOW);
delay(start);
//0
digitalWrite(p1,LOW);
digitalWrite(p2,LOW);
digitalWrite(p3,LOW);
digitalWrite(p4,LOW);
delay(pause);
//1
digitalWrite(p1,HIGH);
digitalWrite(p2,LOW);
digitalWrite(p3,LOW);
digitalWrite(p4,LOW);
delay(pause);
//2
digitalWrite(p1,LOW);
digitalWrite(p2,HIGH);
digitalWrite(p3,LOW);
digitalWrite(p4,LOW);
delay(pause);
//3
digitalWrite(p1,HIGH);
digitalWrite(p2,HIGH);
digitalWrite(p3,LOW);
digitalWrite(p4,LOW);
delay(pause);
//4
digitalWrite(p1,LOW);
digitalWrite(p2,LOW);
digitalWrite(p3,HIGH);
digitalWrite(p4,LOW);
delay(pause);
//5
digitalWrite(p1,HIGH);
digitalWrite(p2,LOW);
digitalWrite(p3,HIGH);
digitalWrite(p4,LOW);
delay(pause);
//6
digitalWrite(p1,LOW);
digitalWrite(p2,HIGH);
digitalWrite(p3,HIGH);
digitalWrite(p4,LOW);
delay(pause);
//7
digitalWrite(p1,HIGH);
digitalWrite(p2,HIGH);
digitalWrite(p3,HIGH);
digitalWrite(p4,LOW);
delay(pause);
//8
digitalWrite(p1,LOW);
digitalWrite(p2,LOW);
digitalWrite(p3,LOW);
digitalWrite(p4,HIGH);
delay(pause);
//9
digitalWrite(p1,HIGH);
digitalWrite(p2,LOW);
digitalWrite(p3,LOW);
digitalWrite(p4,HIGH);
delay(pause);
//10
digitalWrite(p1,LOW);
digitalWrite(p2,HIGH);
digitalWrite(p3,LOW);
digitalWrite(p4,HIGH);
delay(pause);
//shutdown
digitalWrite(p1,LOW);
digitalWrite(p2,LOW);
digitalWrite(p3,LOW);
digitalWrite(p4,LOW);
delay(40000);
}
