//Program 3: Heartbeat Sensor
#define HEARTBEAT_PIN A0

void setup() {
  Serial.begin(9600);
}

void loop() {
  int heartbeatValue = analogRead(HEARTBEAT_PIN);
  Serial.println(heartbeatValue);
  delay(500);
}