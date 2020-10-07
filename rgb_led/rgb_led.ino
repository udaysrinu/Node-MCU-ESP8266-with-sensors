void setup() {
pinMode(D5,OUTPUT);
pinMode(D6,OUTPUT);
pinMode(D7,OUTPUT);
}

void loop() {
  analogWrite(D5,500);
  analogWrite(D6,100);
  analogWrite(D8,100);
  delay(300);
  analogWrite(D5,100);
  analogWrite(D6,500);
  analogWrite(D8,0);
  delay(300);
  analogWrite(D5,0);
  analogWrite(D6,0);
  analogWrite(D8,500);
  delay(300);
}
