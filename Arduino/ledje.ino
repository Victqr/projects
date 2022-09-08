///////////////////////////////////////////////////////////////
//           Simple LED system to make a LED blink           //
//                led is connected to pin 2                  //
///////////////////////////////////////////////////////////////

int led = 2; // The pin the LED is connected to

void setup(){
  pinMode(led, OUTPUT); // Declare the LED as an output
}

void loop(){
  digitalWrite(led, HIGH); // Turn the LED on
  delay(1000); // delay 1s or 1000ms
  digitalWrite(led, LOW); // Turn the LED off
  delay(1000); // delay 1s or 1000ms
}