const int ledPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (5.0 / 1023.0);
  Serial.println(voltage);
  
  
if (voltage  < 1.90){
   digitalWrite(ledPin, LOW);
}else if (voltage > 3.10) {
   digitalWrite(ledPin, LOW);
}  else if (voltage  >=  2.00) {
   digitalWrite(ledPin, HIGH);
}
 	
}
