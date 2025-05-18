char command;

void setup() {
  Serial.begin(9600);          // Start serial communication
  pinMode(13, OUTPUT);         // LED on pin 13
  digitalWrite(13, LOW);       // Ensure LED starts OFF
}

void loop() {
  if (Serial.available()) {
    command = Serial.read();

    if (command == 'O') {
      delay(10);
      if (Serial.read() == 'N') {
        digitalWrite(13, HIGH);
        Serial.println("LED ON");
      }
    } else if (command == 'F') {
      delay(10);
      if (Serial.read() == 'F') {
        digitalWrite(13, LOW);
        Serial.println("LED OFF");
      }
    }
  }
}
