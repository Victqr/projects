int getal1 = 0;
int getal2 = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int getal=0;
  Serial.print("Geef het 1ste getal in = ");
  while (Serial.available() == 0) {
  }
  getal1 = Serial.parseInt();
  Serial.println(getal1);
  Serial.print("Geef het 2de getal in = ");
  while (Serial.available() == 0) {
  }
  getal2 = Serial.parseInt();
  Serial.println(getal2);
  getal=maal(getal1, getal2);
  Serial.print("De vermenigvuldig van de 2 getallen is :  ");
  Serial.println(getal);
  delay(1000);
}

int maal(int getal1, int getal2)
{ int oplossing;
  oplossing = getal1 * getal2;
  return oplossing;
}
