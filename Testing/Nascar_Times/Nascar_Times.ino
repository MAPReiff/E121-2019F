#include <WemosInit.h>

#include <Servo.h> 

#define motor1pin D0 
#define motor2pin D2

Servo motor1; 
Servo motor2;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); //check sensor data
  pinMode(D8,OUTPUT); 
  pinMode(D5,INPUT);
  motor1.attach(motor1pin); 
  motor2.attach(motor2pin);
  delay(5000);

}


void forward(int t) {

    motor1.write(150);
    motor2.write(0);
    delay(t);
  
}

void spin(){
  delay(1000);
  motor1.write(90);
    motor2.write(90);
    delay(2000);
    motor1.write(180);
    motor2.write(180);
    delay(700);

    motor1.write(90);
    motor2.write(90);
    delay(3000);
}

void loop() {
  // put your main code here, to run repeatedly:

  forward(1500);
  spin();

  forward(1500);
  spin();

  forward(2500);
  spin();

  forward(1500);
  spin();

  forward(1500);

}
