int radius = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Geef de straal in = ");
  while (Serial.available() == 0) {
  }
  radius = Serial.parseInt();
  Serial.println(radius);
  som(radius);
  delay(1000);
}

void som(int radius)
{ int oplossing;
  oplossing = 2 * PI * radius;
  Serial.print("De opervlakte van de cirkel is: ");
  Serial.println(oplossing);
}