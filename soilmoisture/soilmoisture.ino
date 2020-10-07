void setup() 
{
  Serial.begin(115200);
   pinMode(D7,OUTPUT);
  pinMode(D6,OUTPUT);
  pinMode(D8,OUTPUT);
}

void loop() 
{
//Serial.println(analogRead(A0));
if(analogRead(A0)>700)
{
  digitalWrite(D6,LOW);
  digitalWrite(D7,HIGH);
  digitalWrite(D8,LOW);
  Serial.println("low moisture water the soil\n");
}
else{
  digitalWrite(D6,HIGH);
  digitalWrite(D7,HIGH);
  digitalWrite(D8,HIGH);
  Serial.println("moisture ok\n");
}
delay(100);
}
