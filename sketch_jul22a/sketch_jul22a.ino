int LED_BUILTIN = 26;

void setup() {
 pinMode(LED_BUILTIN, OUTPUT);
 pinMode(T0, INPUT);
}

void loop() {
 if (touchRead(T0) < 20) {
  digitalWrite(LED_BUILTIN, HIGH);
 } else {
  digitalWrite(LED_BUILTIN, LOW);
 }
delay(1000);
}
