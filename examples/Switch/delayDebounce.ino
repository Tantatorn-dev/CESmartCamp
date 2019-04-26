#define SwitchPin D1
long debounceTime = 50;
int count = 0;

void setup() {
  pinMode(SwitchPin,INPUT_PULLUP);
}

void loop() {
  if(SwitchPin==LOW)
  {
    delay(debounceTime);
    count++;
    Serial.println(count);
  }
}
