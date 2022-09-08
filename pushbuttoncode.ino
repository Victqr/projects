///////////////////////////////////////////////////////////////
//       Simple push button system to make a LED glow        //
//                led is connected to pin 13                 //
//              Button is connected to pin 12                //
///////////////////////////////////////////////////////////////


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
