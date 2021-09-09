
const int IN1 = 7;
const int IN2 = 6;
const int IN3 = 5;
const int IN4 = 4;
const int ENA = 9;
const int ENB = 3;
int trigger_pin = 9;

int echo_pin = 8;

int buzzer_pin = 10; 

int time;

int distance; 

void setup() {

  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);
  pinMode (ENA, OUTPUT);
  pinMode (ENB, OUTPUT);
  //ultrasonic sensor pins
  pinMode (trigger_pin, OUTPUT); 

  pinMode (echo_pin, INPUT);

  pinMode (buzzer_pin, OUTPUT);

}

void loop() {
//control speed 
  analogWrite(ENA, 255);
  analogWrite(ENB, 255); 
//control direction 
//  digitalWrite(IN1, HIGH);
//  digitalWrite(IN2, HIGH);
//  digitalWrite(IN3, HIGH);
//  digitalWrite(IN4, HIGH);
      digitalWrite (trigger_pin, HIGH);

    delayMicroseconds (2);

    digitalWrite (trigger_pin, LOW);

    time = pulseIn (echo_pin, HIGH);

    distance = (time * 0.034) / 2;
    delay(10);
    
if (distance > 21)            
            {
            //LED control
            digitalWrite (buzzer_pin, HIGH);
            delay(3);
            digitalWrite (buzzer_pin, LOW);
            //motor control
            digitalWrite(IN1, HIGH);                    // move forward
            digitalWrite(IN2, LOW);
            digitalWrite(IN3, HIGH);                                
            digitalWrite(IN4, LOW);                                                       
            }

if (distance < 20)
             {
             //LED control
            digitalWrite (buzzer_pin, HIGH);
            delay(3);
            digitalWrite (buzzer_pin, LOW);
             //motor control
             digitalWrite(IN1, LOW);  //Stop                
             digitalWrite(IN2, LOW);
             digitalWrite(IN3, LOW);                                
             digitalWrite(IN4, LOW);
             delay(500);
             digitalWrite(IN1, LOW);      //movebackword         
             digitalWrite(IN2, HIGH);
             digitalWrite(IN3, LOW);                                
             digitalWrite(IN4, HIGH);
             delay(500);
             digitalWrite(IN1, LOW);  //Stop                
             digitalWrite(IN2, LOW);
             digitalWrite(IN3, LOW);                                
             digitalWrite(IN4, LOW);  
             delay(100);  
             digitalWrite(IN1, LOW);       
             digitalWrite(IN2, HIGH);   
             digitalWrite(IN3, LOW);                                 
             digitalWrite(IN4, HIGH);  
             delay(500);
            }    


}
