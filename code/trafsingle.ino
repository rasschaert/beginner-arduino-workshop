const int redCarLed = 3;
const int orangeCarLed = 4;
const int greenCarLed = 5;

void setup() {
  pinMode(redCarLed, OUTPUT);
  pinMode(orangeCarLed, OUTPUT);
  pinMode(greenCarLed, OUTPUT);
  digitalWrite(redCarLed, LOW);
  digitalWrite(orangeCarLed, LOW);
  digitalWrite(greenCarLed, LOW);
}

void loop() {
  digitalWrite(greenCarLed, HIGH);
  delay(10000);
  digitalWrite(greenCarLed, LOW);

  digitalWrite(orangeCarLed, HIGH);
  delay(3000);
  digitalWrite(orangeCarLed, LOW);

  digitalWrite(redCarLed, HIGH);
  delay(10000);
  digitalWrite(redCarLed, LOW);
}

