String message1 = "";
String message2 = "";

void setup() {
  Serial.begin(9600);
  Serial.println("Geef twee teksten in");

}

void loop() {
  while (Serial.available()==1){
       	message1=Serial.readString();
       	message2=Serial.readString();
      if (message1 == message2)
  {
    Serial.println(String("bericht 1 en Bericht 2 is: ") + message1);
  }
  else Serial.println("niet gelijk");
	}

}