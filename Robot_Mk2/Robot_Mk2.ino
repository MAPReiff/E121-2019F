#include <Servo.h> 
#include <WemosInit.h>

#define motor1pin D0 
#define motor2pin D2

Servo motor1; 
Servo motor2;

int walls = 0; //var to check how many times it made it to a wall

void setup() {

Serial.begin(115200); //check sensor data
pinMode(D8,OUTPUT); 
pinMode(D5,INPUT);
motor1.attach(motor1pin); 
motor2.attach(motor2pin); 
motor1.write(180);
motor2.write(0);

}

void loop() {
  Serial.println(ultrasonicPing(D8,D5)); //print sensor data
  delay(1000);

if (ultrasonicPing(D8,D5) <= 500 && walls == 0) { //if sensor detects wall and is 1st wall

//stop both motors
  motor1.write(90);
  motor2.write(90);

  walls++; //add 1 to walls
  Serial.println("I hit a wall!");
    Serial.println(walls);


  //turn robot arround by making both motors opposite
  motor1.write(0);
  motor2.write(180);
  delay (5000); //delay for 5sec to turn arround

  //go ahead
  motor1.write(180);
  motor2.write(0);

}

if (ultrasonicPing(D8,D5) <= 500 && walls == 1) { //if sensor detects wall and is 1st wall
  Serial.println("I hit a wall!");
  Serial.println(walls);

  //stop both motors
    motor1.write(90);
    motor2.write(90);

    
  
}


}
