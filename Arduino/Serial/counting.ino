void setup() {
  Serial.begin(9600);
  Serial.println("start counting to 25"); // Send start counting
}
void loop() {
  for (int Counting=1; Counting<=25; ++Counting) {
    Serial.println(Counting); // Send counting number
    delay(1000);
  }
  Serial.println("Counting to 25 done"); // Send stop counting
  while(1);
}