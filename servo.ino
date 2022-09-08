///////////////////////////////////////////////////////////////
//          Simple servo system to make a LED glow           //
//          potentiometer 1 is connected to pin A1           //
//          potentiometer 2 is connected to pin A2           //
//               Servo 1 is connected to pin 3               //
//               Servo 2 is connected to pin 4               //
///////////////////////////////////////////////////////////////

#include <Servo.h>

//**** servo 1 settings
Servo servo1; 
const int servo1PotPin = A1; // potentiometer on pin A1
const int servo1Pin = 3; // servo on pin 3
int servo1Value;
//**** servo 1 settings END

//**** servo 2 settings
Servo servo2; 
const int servo2PotPin = A2; // potentiometer on pin A0
const int servo2Pin = 4; // servo on pin 4
int servo2Value;
//**** servo 1 settings END

void setup() {
  servo1.attach(servo1Pin); 
  servo2.attach(servo2Pin); 
}

void loop() {
  servo1Value = analogRead(servo1PotPin); 
  servo1Value = map(servo1Value, 1, 1023, 69, 0); // rotate servo 1
  servo1.write(servo1Value);

  servo2Value = analogRead(servo2PotPin); 
  servo2Value = map(servo2Value, 0, 1023, 0, 180); // rotate servo 2
  servo2.write(servo2Value);

  delay(15); // delay of 15 ms
}
