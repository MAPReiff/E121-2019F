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
//  delay(5000);

}

void loop() {
  // put your main code here, to run repeatedly:
     motor1.write(130);
    motor2.write(20);

}
