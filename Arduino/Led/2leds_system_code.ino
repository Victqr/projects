// C++ code
int ledPin1 = 10; //led connectie on pin 10
int ledPin2 = 11;
int onLedTime = 200; //delay time 500 ms
int offLedTime = 100; //delay time 500 ms
int repeat1 = 10; // let loop 1 repeat 10 times
int repeat2 = 15; // let loop 2 repeat 5 times (you need to calculate how much you wil repaet after loop 1 that 10 times repeat)


void setup() {
  pinMode (ledPin1, OUTPUT); //Set LedPin1 if Output, LedPin1 is identify on pin 10
	pinMode (ledPin2, OUTPUT); //Set LedPin2 if Output, LedPin2 is identify on pin 11
  
}

void loop(){
  for (int i=0; i<repeat1; i++){
    digitalWrite(ledPin1, HIGH);  //Turn led 1 on
    delay(onLedTime);              //pause
    digitalWrite(ledPin1, LOW);  //Turn led 1 off
    delay(offLedTime);             //pause
  }
    for (int i=repeat1; i<repeat2; i++){
    digitalWrite(ledPin2, HIGH);  //Turn led 2 on
    delay(onLedTime);              //pause
    digitalWrite(ledPin2, LOW);  //Turn led 2 off
    delay(offLedTime);             //pause
  }
  while(1);
}
