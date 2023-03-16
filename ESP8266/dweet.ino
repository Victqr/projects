#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <ESP8266HTTPClient.h>

const char* ssid = "SSID";
const char* password = "Password";
ESP8266WebServer server(80);

void handleRoot() {
  String html = "<html><body>";
  if (WiFi.status() == WL_CONNECTED) {
    WiFiClient client;
    HTTPClient http;  //Declare an object of class HTTPClient
    http.begin(client, "https://dweet.io/get/latest/dweet/for/shut-up");  //Specify request destination
    int httpCode = http.GET();                                                                  //Send the request
    if (httpCode > 0) { //Check the returning code
      String payload = http.getString();   //Get the request response payload
      html += "<h1>" + payload + "</h1>";  //Include payload in HTML response
    }
    http.end();   //Close connection
  } else {
    html += "<h1>Not connected to WiFi</h1>";
  }
  html += "</body></html>";
  server.send(200, "text/html", html);
}

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print("Connecting..");
  }
  server.on("/", handleRoot);
  server.begin();
  Serial.println("HTTP server started");
}

void loop() {
  server.handleClient();
}
