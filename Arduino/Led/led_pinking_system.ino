int ledPin = 13;                                   
int ledontime = 1000;
int ledofftime = 1000; 
int repeat = 0;

void setup() {                                    
Serial.begin(9600);                       
pinMode(ledPin, OUTPUT);            

  Serial.println("how many times can you pink led?");
  while (Serial.available() == 0){}
  repeat = Serial.parseInt();
  Serial. print("led repeat: ");
  Serial. println(repeat);
}

void loop() {                                  
   for (int i=0; i<repeat; i++){ 
  digitalWrite(ledPin, HIGH); 
  delay(ledontime);             
  digitalWrite(ledPin, LOW);  
  delay(ledofftime);             
  }
}
