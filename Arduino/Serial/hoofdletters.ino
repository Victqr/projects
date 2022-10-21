String message = "";
void setup() {
	Serial.begin(9600);
  	Serial.println("Voer een tekst in");
}
  
void loop() {
	while (Serial.available()==1){
       	message=Serial.readString();
      	Serial.println(String("de tekst die he hebt ingevoerd is: ") + message);
   		message.toUpperCase();
   		Serial.println(String("de tekst in hoofdletters is: ") + message);
	}
}