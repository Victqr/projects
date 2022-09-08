///////////////////////////////////////////////////////////////
//           Simple LED system to make a LED blink           //
//                led is connected to pin 13                 //
///////////////////////////////////////////////////////////////

int led = 2;

void setup() {

    pinMode(led, OUTPUT); // put pin 13 as output of your led

}

void loop() {
    DigitalWrite(led, HIGH); // turn on the led on pin 13
    delay(1000); // 1000 ms pause
    digitalWrite(led, LOW); // turn off the led on pin 13
    delay(1000); // 1000 ms pause
}
