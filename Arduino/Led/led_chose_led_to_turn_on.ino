// C++ code
//
int ledPin1 = 13;
int ledPin2 = 7;
int ledPin3 = 6;
int led = 0;
int delay1 = 10000;

void setup() {                                    
Serial.begin(9600);                       
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
pinMode(ledPin3, OUTPUT);

}

void loop() {
  
  Serial.println("which led should light up");
  Serial.println("led on pin 6 turn on chose 1");
  Serial.println("led on pin 7 turn on chose 2");
  Serial.println("Led on pin 13 turn on chose 3");
  Serial.println("do you want that led 13 turn on and after 10s off and led 7 turn on and after 10s led 6 on and led 7 off chose number 4");
  while (Serial.available() == 0){}
  led = Serial.parseInt();
  Serial. print("led chose: ");
  Serial. println(led);
  
  if (led == 1) {
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin1, LOW);
  }
  else if(led == 2) {
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin3, LOW);

  }
  else if(led == 3) { 
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  }
  else if(led == 4) {
  digitalWrite(ledPin3, HIGH);
  delay(delay1);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(delay1);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin1, HIGH);
 }
}
