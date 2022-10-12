#include <Servo.h>

Servo myServo;
const int buttonPin = 12;
const int led1 = 2;
const int led2 = 3;
int buttonState = 0;

void setup() {
  myServo.attach(6);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  int randomLed = random(2,4);
    if (buttonState == HIGH) {
      digitalWrite(randomLed, HIGH);
      int randomServo = random(0, 181);
      myServo.write(randomServo);
      delay(1000);
      
    } else { 
      digitalWrite(randomLed, LOW);  
    }

}
