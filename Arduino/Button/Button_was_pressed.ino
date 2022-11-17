
const int  buttonPin = 2;    

int buttonPushCounter = 0;   
int buttonState = 0;         
int lastButtonState = 0;     

void setup() {
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}


void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState != lastButtonState) {
    if (buttonState == HIGH) {
      buttonPushCounter++;
    } else {
      Serial.println("Button was pressed");
      Serial.print("Number of button is pres: ");
      Serial.println(buttonPushCounter);
    }
    delay(50);
  }
  lastButtonState = buttonState;
}