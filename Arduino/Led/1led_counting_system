int counter1 = 0; //set counter 1 on 0
int counter2 = 0; //set counter 2 on 0 
int ledPin = 13; //led connectie on pin 13
int onLedTime1 = 500; //delay time 500 ms
int offLedTime1 = 500; //delay time 500 ms
int onLedTime2 = 250; //delay time 500 ms
int offLedTime2 = 250; //delay time 500 ms

void setup() {
   Serial.begin(9600);
 pinMode (ledPin, OUTPUT); //Set LedPin1 if Output, LedPin1 is identify on pin 13
}

void loop() {
do {
    digitalWrite(ledPin, HIGH);  //Turn led 1 on
    delay(onLedTime1);              //pause
    digitalWrite(ledPin, LOW);  //Turn led 1 off
    delay(offLedTime1);             //pause
   Serial.println(counter1);
   counter1++; //counter 1 starts counting 
}
while(counter1 < 10);
  do {
    digitalWrite(ledPin, HIGH);  //Turn led 1 on
    delay(onLedTime2);              //pause
    digitalWrite(ledPin, LOW);  //Turn led 1 off
    delay(offLedTime2);             //pause
   Serial.println(counter2);
 	counter2++; //counter 2 starts counting
  }
  while (counter2 < 10);
while (1);
//freeze loop
}
