int potPin = A0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int potVal = analogRead(potPin);
  Serial.println(potVal);
}