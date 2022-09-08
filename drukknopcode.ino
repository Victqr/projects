int switchPin = 12;
int led = 13;
int switchState = LOW;

void setup() {
    pinMode(led, OUTPUT);
    pinMode(switchPin, INPUT);
}

void loop() {
        switchState = digitalRead(switchPin);
            Serial.println(switchState);
 
                if (switchState == HIGH) {
                    digitalWrite(led, HIGH);
                } else {
                    digitalWrite(led, LOW);
                }    
}
