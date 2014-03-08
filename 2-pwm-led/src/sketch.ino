int ledPin = 3;

void setup()
{
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    analogWrite(ledPin, 0);
    delay(500);
    analogWrite(ledPin, 63);
    delay(500);
    analogWrite(ledPin, 127);
    delay(500);
    analogWrite(ledPin, 191);
    delay(500);
    analogWrite(ledPin, 255);
    delay(500);
}
