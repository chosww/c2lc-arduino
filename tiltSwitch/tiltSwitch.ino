const int switchPin = 8;
int threshold = 10;
const int ledPin = 7;
void setup() {
  Serial.begin(9600);
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);
}
void loop() {
  Serial.println(digitalRead(switchPin));
  if (digitalRead(switchPin) == 1) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  delay(1000);
}
