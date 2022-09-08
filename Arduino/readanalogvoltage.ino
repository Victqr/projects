///////////////////////////////////////////////////////////////
//      Simple read voltage system to make a LED glow        //
//           potentiometer is connected to pin A0            //
///////////////////////////////////////////////////////////////

int reader = A0; // setup value reader on pin analog 0 the potentiometer

void setup() {  //setup 1x after restart
  Serial.begin(9600); // start serial communication at 9600 bits per second
}


void loop() { // loop
  int sensorValue = analogRead(reader);   // read the input on the value
  float U = sensorValue * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V)
  Serial.println(U); // print out the value you read:
}