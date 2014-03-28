/*
  This example requires a pull-down resistor
  If you prefer a pull-up resistor, change HIGH to LOW and vice versa
*/
const int buttonPin = 2;
int previousReading = LOW;
int counter = 0;

void setup() {
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int reading = digitalRead(buttonPin);
  if (reading == HIGH && previousReading == LOW) {
    delay(100);
    if (digitalRead(buttonPin) == HIGH) {
      counter++;
      Serial.print("Button pressed ");
      Serial.print(counter);
      Serial.println(" times");
    }
  }
  previousReading = reading;
}
