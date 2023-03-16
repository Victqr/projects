#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

ESP8266WebServer server(80);

int ledPin = 14;
int ledPin2 = 15;
bool ledState = LOW;

void setup() {
pinMode(ledPin, OUTPUT);
pinMode(ledPin2, OUTPUT);
Serial.begin(115200);
WiFi.begin("SSID", "PASSWORD"); //Connect to the WiFi network
while (WiFi.status() != WL_CONNECTED) { //Wait for connection
delay(500);
Serial.println("Waiting to connect…");
}

Serial.print("IP address: ");
Serial.println(WiFi.localIP()); //Print the local IP
server.on("/on", turnOn); //Associate the handler function to the path
server.on("/off", turnOff);//Associate the handler function to the path
server.on("/toggle", toggle);//Associate the handler function to the path
server.on("/on2", turnOn2); //Associate the handler function to the path
server.on("/off2", turnOff2);//Associate the handler function to the path
server.on("/toggle2", toggle2);//Associate the handler function to the path
server.begin(); //Start the server
Serial.println("Server listening");

}

void loop() {
server.handleClient();
}

void turnOn() {
ledState = HIGH;
digitalWrite(ledPin, ledState);
server.send(200, "text / plain", "LEDS on");
}

void turnOff() {
ledState = LOW;
digitalWrite(ledPin, ledState);
server.send(200, "text / plain", "LEDS off");
}

void toggle() {
ledState = !ledState;
digitalWrite(ledPin, ledState);
server.send(200, "text / plain", "LEDS toggled");
}

void turnOn2() {
ledState = HIGH;
digitalWrite(ledPin2, ledState);
server.send(200, "text / plain", "LEDS on");
}

void turnOff2() {
ledState = LOW;
digitalWrite(ledPin2, ledState);
server.send(200, "text / plain", "LEDS off");
}

void toggle2() {
ledState = !ledState;
digitalWrite(ledPin2, ledState);
server.send(200, "text / plain", "LEDS toggled");
}

