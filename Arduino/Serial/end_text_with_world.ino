String message = "";
void setup() {
	Serial.begin(9600);
	Serial.println("Type a text in the serial monitor");
}
  
void loop() {
	while (Serial.available()==1){
       	message=Serial.readString();
       if (message.endsWith("world")) {
    	Serial.println("word is detected in het bericht");
    	Serial.println(String("Message is: ") + message);
  		}
  		else {
    	Serial.println("world is not detected");
  		}
	}
 
}