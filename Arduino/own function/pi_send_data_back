int radius = 0;
float x = PI;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int getal=0;
  Serial.print("Geef de straal in = ");
  while (Serial.available() == 0) {
  }
  radius = Serial.parseInt();
  Serial.println(radius);
  som(radius);
  delay(1000);
  getal=som(radius);
  Serial.print("circumference = ");
  Serial.println(getal);
  Serial.print("PI = ");
  Serial.println(x);
}

int som(int radius)
{ 
  int oplossing;
  oplossing = 2 * x * radius;
  return oplossing;
}
