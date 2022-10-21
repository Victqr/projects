String message = "";
void setup() {
	Serial.begin(9600);
  	Serial.println("Enter a text");
}
  
void loop() {
	while (Serial.available()==1){
       	message=Serial.readString();
      	Serial.println(String("the text he entered is: ") + message);
   		message.toUpperCase();
   		Serial.println(String("the text in capital letters is: ") + message);
	}
}