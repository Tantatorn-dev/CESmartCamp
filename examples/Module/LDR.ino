#define LDRPin A0

void setup() {
  Serial.begin(9600);
}

void loop() {
  int LDRValue = analogRead(LDRPin);
  Serial.println(LDRValue);
}
