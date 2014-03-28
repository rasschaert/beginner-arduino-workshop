int ledPin = 3;

void setup()
{
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    analogWrite(ledPin, 0);
    delay(500);
    analogWrite(ledPin, 63);  // 25%
    delay(500);
    analogWrite(ledPin, 127); // 50%
    delay(500);
    analogWrite(ledPin, 191); // 75%
    delay(500);
    analogWrite(ledPin, 255); // 100%
    delay(500);
}
