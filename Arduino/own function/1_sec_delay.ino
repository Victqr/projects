int teller=0;

void setup() {
Serial.begin(9600);
}

void loop() {
  Serial.print("teller = ");
  Serial.println(teller);
  increment();
  delay(1000);
}

void increment()
{ teller=teller+1;
}