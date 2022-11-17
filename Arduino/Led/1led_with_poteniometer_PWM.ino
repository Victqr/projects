int LedPin = 6;
int PotPin = A0;
int output;
int LedValue;
void setup() {

 pinMode(LedPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {

 output = analogRead(PotPin);
 LedValue = map(output, 0, 1023, 0, 255);
 Serial.println(String("PWM waarde: ") + LedValue);
 analogWrite(LedPin, LedValue);
 delay(1);

}