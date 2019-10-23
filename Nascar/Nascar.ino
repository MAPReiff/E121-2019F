#include <WemosInit.h>
#include <Servo.h> 

#define motor1pin D0 //left
#define motor2pin D2 //right

Servo motor1; 
Servo motor2;

int walls = 0;

void setup() {

  // put your setup code here, to run once:
  Serial.begin(115200); //check sensor data
  pinMode(D8,OUTPUT); 
  pinMode(D5,INPUT);
  motor1.attach(motor1pin); 
  motor2.attach(motor2pin);
  delay(5000);
  
}

void loop() {

   long distance;
  long duration;
  duration = ultrasonicPing(D8, D5);
  distance = microsecondsToInches(duration);
  Serial.println(distance);

      if (distance > 3){
    //forward code
    motor1.write(150);
    motor2.write(0);

  }

   else{

    motor1.write(90);
    motor2.write(90);
    delay(2000);
    motor1.write(0);
    motor2.write(0);
    delay(250);

    motor1.write(90);
    motor2.write(90);
    delay(3000);

    
  }

//if (walls=0){
//
//    if (distance > 7){
//    //forward code
//    motor1.write(0);
//    motor2.write(40);
//
//  }
//  else{
//
//    motor1.write(90);
//    motor2.write(90);
//    delay(2000);
//    motor1.write(0);
//    motor2.write(0);
//    delay(250);
//
//    motor1.write(90);
//    motor2.write(90);
//    delay(3000);
//
//    
//  }
//  
//}
//
//if (walls=1){
//    if (distance > 3){
//    //forward code
//    motor1.write(150);
//    motor2.write(0);
//
//  }
//  else{
//
//    motor1.write(90);
//    motor2.write(90);
//    delay(2000);
//    motor1.write(0);
//    motor2.write(0);
//    delay(250);
//
//    motor1.write(90);
//    motor2.write(90);
//    delay(3000);
//
//    
//  }
//}




}

long microsecondsToInches (long microseconds) {
  return microseconds/74/2;
}
