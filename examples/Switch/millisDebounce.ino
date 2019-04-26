#define SwitchPin D1
long debounceTime = 50, lastDebounce = 0;
int count = 0, lastState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(SwitchPin,INPUT_PULLUP);
}

void loop() {
  int thisState = digitalRead(SwitchPin);
  if (thisState != lastState) {
    lastDebounce = millis();
  }
  if (millis() - lastDebounce > debounceTime)
  {
    count++;
    Serial.println(count);
  }
  lastState = thisState;
}
