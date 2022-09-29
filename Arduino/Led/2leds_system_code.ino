const int ledPin = 10; //led connectie on pin 10
const int ledPin2 = 11; //led connectie on pin 11
const int onLedTime = 200; //delay time 200 ms
const int offLedTime = 100; //delay time 100 ms

void setup() {
  pinMode (ledPin, OUTPUT); //Set LedPin if Output, LedPin is identify on pin 10
    pinMode (ledPin2, OUTPUT); //Set LedPin2 if Output, LedPin is identify on pin 11
}

void loop(){
  for (int i=0; i<10; i++){
    digitalWrite(ledPin, HIGH);  // turn LEDPin on
    delay(onLedTime);              // pause
    digitalWrite(ledPin, LOW);  // turn LEDPin off
    delay(offLedTime);             // pause
  }
  for (int i=10; i<15; i++){
    digitalWrite(ledPin2, HIGH);  // turn LEDPin2 onn
    delay(onLedTime);              // pause
    digitalWrite(ledPin2, LOW);  // turn LEDPin2 off
    delay(offLedTime);             // pause
  }
  while(1); //stop whole loop
}
