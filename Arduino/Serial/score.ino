int score = 60; // score in procent

void setup()
{
    Serial.begin(9600);
	Serial.println(String("Your score is: ") + score); // Send start counting
}

void loop()
{
	if (score < 50) {
	  Serial.println(String("score: ") + score);
      Serial.println("Onvoldoende!");
      while(1);
	} else if (score <= 60) {
      Serial.println(String("score: ") + score);
      Serial.println("Geslaagd!");
      while(1);
	}else if (score <= 70) {
      Serial.println(String("score: ") + score);
      Serial.println("Voldoende!");
      while(1);
	}else if (score <= 80) {
	  Serial.println(String("score: ") + score);
      Serial.println("Goed gewerkt!");
      while(1);
	}else if (score <= 90) {
	  Serial.println(String("score: ") + score);
      Serial.println("Zeer goed gewerkt!");
      while(1);
    }else if (score <= 100 ){
      Serial.println(String("score: ") + score);
      Serial.println("Schitterend gewerkt!");
      while(1);
    }
}
