
void setup() {
    pinMode(32, OUTPUT);
}

void loop() {
    int switchValue = digitalRead(2);
    digitalWrite(32, switchValue);
}
