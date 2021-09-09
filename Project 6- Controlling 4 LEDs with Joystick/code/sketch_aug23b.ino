int led1 = 5;
int led2 = 6;
int led3 = 9;
int led4 = 10;

// define joystick pins
int joystick_x = A0;
int joystick_y = A1;

//read values from the analog pin
int joystick_xvalue = 0;
int joystick_yvalue = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(joystick_x, INPUT);
  pinMode(joystick_y, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  joystick_xvalue = 0;
  joystick_yvalue = 0;
  
  //read values from joystick_x
  joystick_xvalue = analogRead(joystick_x);
  joystick_xvalue = map (joystick_xvalue, 0, 1023, -90, 90);
  
  //read values from joystick_y
  joystick_yvalue = analogRead(joystick_y);
  joystick_yvalue = map (joystick_yvalue, 0, 1023, -90, 90);

  if(joystick_xvalue < -5){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  }
  else if(joystick_xvalue > 5){
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  }
  else if(joystick_yvalue < -5){
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
  }
  else if(joystick_yvalue > 5){
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
  }
  else{
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  }
  
  delay(15);
}
