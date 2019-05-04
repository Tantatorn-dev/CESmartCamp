#define SWITCH_PIN D1
long debounceTime = 50;
int count = 0;

void setup() {
  pinMode(SWITCH_PIN, INPUT_PULLUP);
}

void loop() {
  if (SWITCH_PIN == LOW)
  {
    delay(debounceTime);
    count++;
    Serial.println(count);
  }
}
