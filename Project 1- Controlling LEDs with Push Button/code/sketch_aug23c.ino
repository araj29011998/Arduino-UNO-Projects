//**********************************************************************************************************//
// Author: 
// WellTronic
//
// Description:
// This code is part of a video series covering all Arduino sensors from the Arduino sensor kit.
// One of the sensors in this video series is the button module sensor.
//
// In this video I will explain step by step how to use the button module 
// https://www.youtube.com/watch?v=ZdAWmokaiNk
//
// You're also welcome to take a look at the YouTube channel for more details about hardware and software.
// https://www.youtube.com/channel/UC0UCNqE8i4unG8nfuakd0vw
// 
// Enjoy working with this sensor and see you soon :) !
//
//**********************************************************************************************************//


int buttonPin = 4;
int ledPin = 3;

bool buttonState = false;

void setup() {
pinMode(buttonPin,INPUT);
pinMode(ledPin,OUTPUT);

}
void loop() {
  
buttonState = digitalRead(buttonPin);

 if ( buttonState == true){
  digitalWrite(ledPin, HIGH);
 }
else {
  digitalWrite(ledPin, LOW);
}


}
