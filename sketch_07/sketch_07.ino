Program 7: Flame Sensor
-----------------------------------
#define FLAME_SENSOR_PIN D1

void setup() {
  Serial.begin(9600);
  pinMode(FLAME_SENSOR_PIN, INPUT);
}

void loop() {
  int flameValue = digitalRead(FLAME_SENSOR_PIN);
  Serial.println(flameValue);
  delay(500);
}