#include <WemosInit.h>

int walls = 0;

int startNum = 1;

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
  // put your main code here, to run repeatedly:
  walls=walls+1;
  Serial.println(walls);

  long distance;
  long duration;
  duration = ultrasonicPing(D8, D5);
  distance = microsecondsToInches(duration);
  Serial.println(distance);
}

long microsecondsToInches (long microseconds) {
  return microseconds/74/2;
}
