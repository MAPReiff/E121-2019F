#include <WemosInit.h>
#include <Servo.h> 

#define motor1pin D0 
#define motor2pin D2

Servo left; 
Servo right;

int leftTime = 0;
int rightTime = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); //check sensor data
  pinMode(D8,OUTPUT); 
  pinMode(D5,INPUT);
  left.attach(motor1pin); 
  right.attach(motor2pin);
  delay(3000);

forward(500);
halt(500);
turnRight();
halt(300);
forward(800); //to B
halt(400); //stop B
backwards(240);
halt(400);
turnLeft();
halt(400);
forward(800);
halt(400);
turnLeft();
halt(600);
forward(680); //to D
halt(600);
backwards(340);
halt(400);
turnArround();
halt(400);
forward(800); //to A
halt(400); //stop A



////forward
//    left.write(130);
//    right.write(20);
//    delay(500);
//
////stop
//    left.write(90);
//    right.write(90);
//
//    delay(500);
//
////right turn
//    right.write(90);
//    left.write(130);
//    delay(340);
//
////stop
//    left.write(90);
//
//    delay(300);
//    
////forward to B
//    right.write(20);
//    left.write(130);
////    delay(872);
//    delay(800);
//
//
////stop at B
//    right.write(90);
//    left.write(90);
//    delay(400);
//
////back up
//    right.write(110);
//    left.write(60);
//    delay(240);

//  //stop
//  left.write(90);
//  right.write(90);
//
//  delay(400);

//  //left turn
//  right.write(20);
//  left.write(90);
//  delay(400);

//  //stop
//  right.write(90);
//  delay(400);

//  //forward
//  right.write(20);
//  left.write(130);
//  delay(800);

//  //stop
// right.write(90);
// left.write(90);
//
// delay(400);
//
// //turn left
//   right.write(20);
//  left.write(90);
//  delay(410);

//  //stop
//  right.write(90);
//  left.write(90);
//  delay(600);
//
//  //forward to D
//  right.write(20);
//left.write(130);
//delay(680);
//
//  //stop
//  right.write(90);
//  left.write(90);
//
//  delay(600);


////back up
//    right.write(110);
//    left.write(60);
//    delay(340);

//  //stop
//  left.write(90);
//  right.write(90);
//
//  delay(400);

//  
////turn arround
//    right.write(90);
//    left.write(130);
//    delay(875);

////stop
//    right.write(90);
//    left.write(90);
//    delay(400);

//    //forward to A
//
//    right.write(20);
//    left.write(130);
//    delay(800);
//
//    //stop
//    right.write(90);
//    left.write(90);



    

}

void loop() {
  // put your main code here, to run repeatedly:

}

void forward(int t){
    
    right.write(20);
    left.write(150);
    delay(t);
    right.write(90);
    left.write(90);
  
}

void backwards(int t){
    
    right.write(110);
    left.write(60);
    delay(t);
    right.write(90);
    left.write(90);
  
}

void turnLeft(){
    right.write(20);
    left.write(90);
    delay(leftTime);
    right.write(90);
    left.write(90);
  
}

void turnRight(){
    right.write(90);
    left.write(130);
    delay(rightTime);
    right.write(90);
    left.write(90);
  
}

void halt(int t){

    left.write(90);
    right.write(90);
    delay(t);
  
}

void turnArround(){
    right.write(90);
    left.write(130);
    delay(875);
}
