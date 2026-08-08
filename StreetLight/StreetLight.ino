int photoresist = A0;
void setup() {
  // put your setup code here, to run once:
  pinMode(photoresist, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(photoresist));
  analogRead(photoresist);
  if(analogRead(photoresist) > 580 )
  {
    digitalWrite(13, HIGH);
  }
  else
  {
    digitalWrite(13,LOW);
  }
  delay(500);
 
  

}
