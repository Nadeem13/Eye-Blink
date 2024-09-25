int relaySignalPin = 8;
int irSensorInputPin = 3;

void setup() {
  pinMode(relaySignalPin, OUTPUT);
  pinMode(irSensorInputPin, INPUT);
}

void loop() {
  if(digitalRead(irSensorInputPin)==LOW)
  digitalWrite(relaySignalPin, HIGH);
  else
  digitalWrite(relaySignalPin, LOW);
}
