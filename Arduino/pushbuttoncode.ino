///////////////////////////////////////////////////////////////
//       Simple push button system to make a LED glow        //
//                led is connected to pin 9                  //
//              Button is connected to pin 11                //
///////////////////////////////////////////////////////////////


int ledPin = 9;
int buttonPin = 11;

void setup(){
  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin,INPUT);
}

void loop(){
  if (digitalRead(buttonPin)==HIGH){
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
