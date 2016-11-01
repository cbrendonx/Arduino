int micPin = A0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int micVal = analogRead(micPin);
  Serial.println(micVal);
}
