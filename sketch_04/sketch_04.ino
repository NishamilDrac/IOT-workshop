//Program 5: Moisture Sensor
#define MOISTURE_SENSOR_PIN A0

void setup() {
  Serial.begin(9600);
}

void loop() {
  int moistureValue = analogRead(MOISTURE_SENSOR_PIN);
  Serial.println(moistureValue);
  delay(500);
}
