int lightPin = 3;
int potPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  analogWrite(lightPin,255);
  int potVal = analogRead(potPin);
  delay(potVal);
  analogWrite(lightPin,0);
  potVal = analogRead(potPin);
  delay(potVal);
  Serial.println(digitalRead(potVal));
}
