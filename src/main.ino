void setup() {
  pinMode(PD13, OUTPUT);
  pinMode(PD14, OUTPUT);
  pinMode(PD15, OUTPUT);
  pinMode(PD12, OUTPUT);
  digitalWrite(PD13, LOW);
  digitalWrite(PD14, LOW);
  digitalWrite(PD15, LOW);
  digitalWrite(PD12, LOW);
}

void loop() {
  digitalWrite(PD12, LOW);
  digitalWrite(PD13, HIGH);
  delay(100);
  digitalWrite(PD13, LOW);
  digitalWrite(PD14, HIGH);
  delay(100);
  digitalWrite(PD14, LOW);
  digitalWrite(PD15, HIGH);
  delay(100);
  digitalWrite(PD15, LOW);
  digitalWrite(PD12, HIGH);
  delay(100);
}
