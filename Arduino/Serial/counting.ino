int coutingnumber = 25;

void setup() {
  Serial.begin(9600);
  Serial.println(String("starting counting to ") + coutingnumber); // Send start counting
}
void loop() {
  for (int Counting=1; Counting<=coutingnumber; ++Counting) {
    Serial.println(Counting); // Send counting number
    delay(1000);
  }
  Serial.println(String("Done counting to ") + coutingnumber); // Send stop counting
  while(1);
}
