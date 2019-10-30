#include <WemosInit.h>
#include <Servo.h>

#define motor1pin D0
#define motor2pin D2

Servo motor1;
Servo motor2;

void setup() {
  Serial.begin(115200); //check sensor data
  pinMode(D8,OUTPUT); 
  pinMode(D5,INPUT);
  motor1.attach(motor1pin); 
  motor2.attach(motor2pin);
  delay(5000);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  long distance;
  long duration;
  duration = ultrasonicPing(D8, D5);
  distance = microsecondsToInches(duration);
  Serial.println(distance);

  if (distance > 3){
    motor1.write(150);
    motor2.write(0);
  }

  else{
    motor1.write(90);
    motor2.write(0);
    delay(500);
  }

}

long microsecondsToInches (long microseconds) {
  return microseconds/74/2;
}
