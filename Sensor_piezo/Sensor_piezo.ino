// Projeto 13 – Sensor de batida piezo
int ledPin = 9; // LED no pino digital 9
int piezoPin = 5; // Piezo no pino analógico 5
int threshold = 120; // O valor do sensor a ser atingido antes da ativação
int sensorValue = 0; // Uma variável para armazenar o valor lido do sensor
float ledValue = 0; // O brilho do LED

void setup() {
  pinMode(ledPin, OUTPUT); // Define o ledPin como OUTPUT
  Serial.begin(9600);
}

void loop() {
sensorValue = analogRead(piezoPin); // Lê o valor do sensor

if (sensorValue <= threshold) { // Se uma batida for detectada, defina o brilho como máximo
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
}

// Certifica-se de que o valor não descerá abaixo de zero
Serial.println(analogRead(piezoPin));
}
