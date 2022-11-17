int LedPin = 6;
void setup() {
    Serial.begin(9600);
  pinMode(LedPin, OUTPUT);
}
void loop() {
  for(int i=0; i<255; i++){
    analogWrite(LedPin, i);
        Serial.println(String("PWM waarde: ") + i);
    delay(50);
  }
  for(int i=255; i>0; i--){
    Serial.println(String("PWM waarde: ") + i);
    analogWrite(LedPin, i);
    delay(50);
  }
}