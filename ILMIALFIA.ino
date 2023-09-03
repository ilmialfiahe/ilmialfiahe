int buttonPin = 2; 
int ledPin1 = 13;  
int ledPin2 = 12;  
bool ledsOn = false;     

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    delay(30); 
    if (!ledsOn) {
      ledsOn = true;
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
    } else {
      ledsOn = false;
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);
    }
    while (digitalRead(buttonPin) == LOW) {
    }
  }
}