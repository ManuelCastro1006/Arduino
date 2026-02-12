int pin = 9;
int bgns1 = 255;
int bgns2 = 125;
int bgns3 = 100;


void setup() {
  // put your setup code here, to run once:
pinMode(pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(pin,bgns1);
delay(500);
analogWrite(pin,bgns2);
delay(500);
analogWrite(pin,bgns3);
delay(500);

}
