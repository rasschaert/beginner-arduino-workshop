const int buttonPin = 2;
const int ledPin = 13;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() { 
  int reading = digitalRead(buttonPin);
  if (reading == HIGH) {
    Serial.println("high");
    digitalWrite(ledPin, LOW);
  }
  else {
    Serial.println("!!!! LOW !!!!");
    digitalWrite(ledPin, LOW);
  }
  delay(100);
}
