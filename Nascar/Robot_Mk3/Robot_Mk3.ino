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
  else if(distance == 3 && distance != 0){
    //spin code
    motor1.write(90);
    motor2.write(90);
    delay(2000);
    motor1.write(0);
    motor2.write(0);
    delay(375);

    motor1.write(90);
    motor2.write(90);
    delay(3000);
    

  }
//  else{
//    //spin code
//    motor1.write(90);
//    motor2.write(90);
//    delay(2000);
//    motor1.write(0);
//    motor2.write(0);
//    delay(375);
//
//    motor1.write(90);
//    motor2.write(90);
//    delay(3000);
//    
//
//  }

}

long microsecondsToInches (long microseconds) {
  return microseconds/74/2;
}
