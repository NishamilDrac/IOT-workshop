Program 6: Heat Sensor
---------------------------------
#define HEAT_SENSOR_PIN A0

void setup() {
  Serial.begin(9600);
}

void loop() {
  int heatValue = analogRead(HEAT_SENSOR_PIN);
  Serial.println(heatValue);
  delay(500);
}