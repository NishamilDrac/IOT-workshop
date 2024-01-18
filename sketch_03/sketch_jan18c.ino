//Program : Tilt Sensor
#define TILT_SENSOR_PIN D1

void setup() {
  Serial.begin(9600);
  pinMode(TILT_SENSOR_PIN, INPUT);
}

void loop() {
  int tiltValue = digitalRead(TILT_SENSOR_PIN);
  Serial.println(tiltValue);
  delay(500);
}