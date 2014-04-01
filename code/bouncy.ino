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
  // If the reading used to be LOW and is now HIGH, that marks the transition of a button being pushed
  // a transition of HIGH to LOW would indicate the button being released, but that's not what we're counting here
  if (previousReading == LOW && reading == HIGH) {
    counter++;
    Serial.print("Button pressed ");
    Serial.print(counter);
    Serial.println(" times");
  }
  previousReading = reading;
}
