#include <WemosInit.h>
#include <Servo.h> 

#define motor1pin D0 
#define motor2pin D2

Servo left; 
Servo right;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); //check sensor data
  pinMode(D8,OUTPUT); 
  pinMode(D5,INPUT);
  left.attach(motor1pin); 
  right.attach(motor2pin);
  delay(3000);

//  //back up
//    right.write(105);
//    left.write(70);
//    delay(200);
//    left.write(75);
//    delay(200);
//    left.write(80);
//    delay(700);
//
//right.write(90);
//delay(2);
//
//left.write(90);

    //stop
//    left.write(90);
//    right.write(90);

//back up
    right.write(110);
    left.write(60);
    delay(900);

//    right.write(90);
//    delay(2);

left.write(90);
delay(10);
right.write(90);

    //stop
    left.write(90);
    right.write(90);
    delay(500);

}

void loop() {
  // put your main code here, to run repeatedly:

}
