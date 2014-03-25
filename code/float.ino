const int buttonPin = 2;
const int ledPin = 13;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() { 
  int reading = digitalRead(buttonPin);
  digitalWrite(ledPin, reading);
  if (reading == LOW) {
    Serial.println("low");
  }
  else {
    Serial.println("!!!! HIGH !!!!");
  }
  delay(100);
}
