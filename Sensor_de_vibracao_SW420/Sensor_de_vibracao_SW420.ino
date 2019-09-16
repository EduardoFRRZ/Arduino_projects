int sensor_pin = 3;
int LED_pin = 13;

void setup() {
  pinMode(sensor_pin, INPUT);
  pinMode(LED_pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensor_val;
  sensor_val = digitalRead(sensor_pin);

  if(sensor_val == 0) {
    Serial.println(sensor_val);
    digitalWrite(LED_pin, HIGH);
    delay(500);
    digitalWrite(LED_pin, LOW);
    delay(1000);
  }
  else {
    digitalWrite(LED_pin, LOW);
    Serial.println(sensor_val);
  }
}
