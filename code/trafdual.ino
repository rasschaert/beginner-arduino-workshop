const int redCarLed = 3;
const int orangeCarLed = 4;
const int greenCarLed = 5;
const int redPedLed = 6;
const int orangePedLed = 7;
const int greenPedLed = 8;


void setup() {
  pinMode(redCarLed, OUTPUT);
  pinMode(orangeCarLed, OUTPUT);
  pinMode(greenCarLed, OUTPUT);
  pinMode(redPedLed, OUTPUT);
  pinMode(orangePedLed, OUTPUT);
  pinMode(greenPedLed, OUTPUT);
  digitalWrite(redCarLed, LOW);
  digitalWrite(orangeCarLed, LOW);
  digitalWrite(greenCarLed, LOW);
  digitalWrite(redPedLed, LOW);
  digitalWrite(orangePedLed, LOW);
  digitalWrite(greenPedLed, LOW);
}

void loop() {
  digitalWrite(redPedLed, HIGH);
  digitalWrite(redCarLed, LOW);
  digitalWrite(greenCarLed, HIGH);
  delay(10000);
  digitalWrite(greenCarLed, LOW);

  digitalWrite(orangeCarLed, HIGH);
  delay(3000);
  digitalWrite(orangeCarLed, LOW);

  digitalWrite(redCarLed, HIGH);
  delay(5000);

  digitalWrite(redPedLed, LOW);
  digitalWrite(greenPedLed, HIGH);
  delay(10000);
  digitalWrite(greenPedLed, LOW);

  digitalWrite(orangePedLed, HIGH);
  delay(3000);
  digitalWrite(orangePedLed, LOW);

  digitalWrite(redPedLed, HIGH);
  delay(5000);
}
