int cPin = 4;
int dPin = 5;
int ePin = 6;
int fPin = 7;
int gPin = 8;
int aPin = 9;
int bPin = 10;

void setup() {
  Serial.begin(9600);
  pinMode(cPin, INPUT_PULLUP);
  pinMode(dPin, INPUT_PULLUP);
  pinMode(ePin, INPUT_PULLUP);
  pinMode(fPin, INPUT_PULLUP);
  pinMode(gPin, INPUT_PULLUP);
  pinMode(aPin, INPUT_PULLUP);
  pinMode(bPin, INPUT_PULLUP);
}
 
void loop() {
  int cVal = digitalRead(cPin);
  int dVal = digitalRead(dPin);
  int eVal = digitalRead(ePin);
  int fVal = digitalRead(fPin);
  int gVal = digitalRead(gPin);
  int aVal = digitalRead(aPin);
  int bVal = digitalRead(bPin);
  Serial.print(cVal);
  Serial.print(',');
  Serial.print(dVal);
  Serial.print(',');
  Serial.print(eVal);
  Serial.print(',');
  Serial.print(fVal);
  Serial.print(',');
  Serial.print(gVal);
  Serial.print(',');
  Serial.print(aVal);
  Serial.print(',');
  Serial.println(bVal);
}
