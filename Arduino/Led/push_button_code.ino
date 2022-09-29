///////////////////////////////////////////////////////////////
//       Simple push button system to make a LED glow        //
//                led is connected to pin 9                  //
//              Button is connected to pin 11                //
///////////////////////////////////////////////////////////////


int led = 9;
int button = 11;

void setup(){
  pinMode(led, OUTPUT); // Declare the LED as an output
  pinMode(button, INPUT); // Declare the BUTTON as an input
}

void loop(){
  if (digitalRead(buttonPin)==HIGH){ // if button pressed turn led on
    digitalWrite(led, HIGH); // Turn the LED on
  } else { // if button not pressed turn led ff
    digitalWrite(led, LOW); // Turn the LED off
  }
}
