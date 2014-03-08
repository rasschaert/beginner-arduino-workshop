int potPin = 0;
int ledPin = 3;

void setup()
{
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    // int potVal = analogRead(potPin);
    int potVal = analogRead(A0);
    analogWrite(ledPin, potVal / 4);
    Serial.println(potVal);
    delay(1);        // delay in between reads for stability
}

