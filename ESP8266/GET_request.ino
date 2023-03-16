#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

const char* ssid = "SSID";
const char* password = "Password";

void setup () {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print("Connecting..");
  }
}

void loop() {
  if (WiFi.status() == WL_CONNECTED) { //Controleer de WiFi-verbinding
    WiFiClient client;
    HTTPClient http;  //Declareer een object van de HTTPClient-klasse
    int count = 1; // teller voor het veranderen van de waarde van "naam"
    while (true) {
      String url = "http://www.sensor-cube.be/opleidingiot/formget.php?naam=test" + String(count);
      http.begin(client, url);  //Specificeer de bestemmings-URL
      int httpCode = http.GET(); //Verstuur het verzoek
      Serial.print("HttpCode:");
      Serial.println(httpCode);
      if (httpCode > 0) { //Controleer de terugkeercode
        String payload = http.getString();   //Haal de payload van het verzoek op
        Serial.println(payload);             //Print de response payload
      }
      http.end();   //Sluit de verbinding
      count++; // verhoog de teller
      delay(5000); // wacht 5 seconden voordat u een nieuw verzoek verzendt
    }
  }
}
