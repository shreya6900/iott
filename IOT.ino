void setup() {
  // put your setup code here, to run once:
  pinMode (D4,OUTPUT);
  pinMode(D1,OUTPUT);
  pinMode(D7,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(D4,HIGH);
  digitalWrite(D1,HIGH);
  digitalWrite(D7,HIGH);
  delay(1000);
  digitalWrite(D4,LOW);
  digitalWrite(D1,LOW);
  digitalWrite(D7,LOW);
  delay(1000);

}
