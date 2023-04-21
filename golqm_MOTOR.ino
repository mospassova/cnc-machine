
int RelayPin = 12;

void setup() {
  // Set RelayPin as an output pin
  Serial.begin(9600);
}

void loop() {

  for (RelayPin = 2; RelayPin < A5; RelayPin++){
    pinMode(RelayPin, OUTPUT);
    Serial.print("Pin under test: ");
    Serial.print(RelayPin);

  // Let's turn on the relay...
  Serial.print("         ........ LOW");
  digitalWrite(RelayPin, LOW);
  delay(3000);

  Serial.print("         ........ HIGH");
  // Let's turn off the relay...
  digitalWrite(RelayPin, HIGH);
  delay(3000);

  Serial.print("         ........ HIGH");
  // Let's turn off the relay...
  digitalWrite(RelayPin, LOW);
  delay(3000);
  
  Serial.println("    ;");
  }
}
