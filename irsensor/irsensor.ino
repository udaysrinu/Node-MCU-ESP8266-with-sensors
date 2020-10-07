void setup() {
  Serial.begin(115200);
  pinMode(D7,OUTPUT);
  pinMode(D6,OUTPUT);
  pinMode(D8,OUTPUT);
}

void loop() {
  
  Serial.println(analogRead(A0));
  digitalWrite(D6,LOW);
  digitalWrite(D7,HIGH);
  digitalWrite(D8,LOW);

delay(100);
}
