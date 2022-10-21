String message = "";
String lengte = "";
void setup() {
	Serial.begin(9600);
	Serial.println("Typ een tekst in de serial monitor");


}
  
void loop() {
	while (Serial.available()==1){
       	message=Serial.readString();
        lengte=message.length(); 
   		Serial.println(lengte);
	}
}