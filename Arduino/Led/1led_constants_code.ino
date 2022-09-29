const int ledPin = 10; //led connectie on pin 10
const int onLedTime = 500; //delay time 500 ms
const int offLedTime = 500; //delay time 500 ms

void setup() {
  pinMode (ledPin, OUTPUT); //Set LedPin if Output, LedPin is identify on pin 10
}

void loop() {
  digitalWrite(ledPin, HIGH); //Led on
  delay(onLedTime); // delay time 500 ms
  digitalWrite(ledPin, LOW); //Led off
  delay(offLedTime); // delay time 500 ms
}
