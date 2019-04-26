#define BuzzerPin D2

void setup() {
  pinMode(BuzzerPin,OUTPUT);
}

void loop() {
  tone(BuzzerPin,20);
  delay(1000);
  tone(BuzzerPin,20000,1000);
}
