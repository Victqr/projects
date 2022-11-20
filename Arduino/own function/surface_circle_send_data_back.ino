int straal = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
    int getal=0;
  Serial.print("Geef de straal in = ");
  while (Serial.available() == 0) {
  }
  straal = Serial.parseInt();
  Serial.println(straal);
  getal =som(straal);
  Serial.print("De oppervlakte van de cirkel is : ");
  Serial.println(getal);
  delay(1000);
}

int som(int straal)
{ int oplossing;
  oplossing = PI * straal * straal;
  return oplossing;
}
