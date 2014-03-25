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
    counter++;
    Serial.print("Button pressed ");
    Serial.print(counter);
    Serial.println(" times");
  }
  previousReading = reading;
}
