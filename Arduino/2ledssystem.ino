int ledPin = 10; //led connectie on pin 10
int ledPin2 = 11; //led connectie on pin 11
int onLedTime = 200; //delay time 500 ms
int offLedTime = 100; //delay time 500 ms
int repeat1 = 10; //repeat loop 1 to 10 times
int repeat2 = 15; //repeat loop 2 to 15 times

void setup() {
  pinMode (ledPin, OUTPUT); //Set LedPin if Output, LedPin is identify on pin 10
	pinMode (ledPin2, OUTPUT); //Set LedPin if Output, LedPin is identify on pin 11
  
}

void loop(){
  for (int i=0; i<repeat1; i++){
    digitalWrite(ledPin, HIGH);  // zet LEDPin aan
    delay(onLedTime);              // pauze
    digitalWrite(ledPin, LOW);  // zet LEDPin uit
    delay(offLedTime);             // pauze
  }
    for (int i=repeat1; i<repeat2; i++){
    digitalWrite(ledPin2, HIGH);  // zet LEDPin aan
    delay(onLedTime);              // pauze
    digitalWrite(ledPin2, LOW);  // zet LEDPin uit
    delay(offLedTime);             // pauze
  }
  while(1);
}
