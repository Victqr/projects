int ledPin = 13;                                   
int ledontime = 0;
int ledofftime = 0; 
int repeat = 0;

void setup() {                                    
Serial.begin(9600);                       
pinMode(ledPin, OUTPUT);            

  Serial.println("how many times can you pink led?");
  while (Serial.available() == 0){}
  repeat = Serial.parseInt();
  Serial. print("led repeat: ");
  Serial. println(repeat);

  Serial.println("how long do you want your led to stay on?");
  while (Serial.available() == 0){} 
  ledontime = Serial.parseInt();
  Serial.print("led on time is: ");
  Serial.println(ledontime);
  
  Serial.println("how long do you want your led to stay off?");
  while (Serial.available() == 0){} 
  ledofftime = Serial.parseInt();
  Serial.print("led off time is: ");
  Serial.println(ledofftime);
 
}

void loop() {
   for (int i=0; i<repeat; i++){
  digitalWrite(ledPin, HIGH);
  delay(ledontime);
  digitalWrite(ledPin, LOW);
  delay(ledofftime);
  }
}
