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


//right turn
    right.write(90);
    left.write(130);
    delay(360);
   
    //stop
    left.write(90);

    delay(300);
    
    //forward to 3/b
    right.write(20);
    left.write(130);
    delay(1300);

        //stop
    left.write(90);
    right.write(90);
    delay(400);

    //turn left to B
   right.write(20);
    left.write(90);
  delay(410);

  //stop
  right.write(90);
  left.write(90);
  delay(600);

//forward to B
    right.write(20);
    left.write(130);
//    delay(872);
    delay(800);


//stop at B
    right.write(90);
    left.write(90);
    delay(400);

//back up
    right.write(110);
    left.write(60);
    delay(600);

  //stop
  left.write(90);
  right.write(90);

  delay(400);

  //left turn
  right.write(20);
  left.write(90);
  delay(380);

  //stop
  right.write(90);
  delay(400);

  //forward
  right.write(20);
  left.write(130);
  delay(800);

  //stop
 right.write(90);
 left.write(90);

 delay(400);

 //turn left
   right.write(20);
  left.write(90);
  delay(410);

  //stop
  right.write(90);
  left.write(90);
  delay(600);

  //forward to D
  right.write(20);
left.write(130);
delay(680);

  //stop
  right.write(90);
  left.write(90);

  delay(600);


//back up
    right.write(110);
    left.write(60);
    delay(340);

  //stop
  left.write(90);
  right.write(90);

  delay(400);

  
//turn arround
    right.write(90);
    left.write(130);
    delay(875);

//stop
    right.write(90);
    left.write(90);
    delay(400);

    //forward to A

    right.write(20);
    left.write(130);
    delay(800);

    //stop
    right.write(90);
    left.write(90);
    delay(300);
    

//back up
    right.write(110);
    left.write(60);
    delay(100);

    //stop
    left.write(90);
    right.write(90);
    delay(500);

    //turn arround
    right.write(90);
    left.write(130);
    delay(875);

    //stop
    left.write(90);
    right.write(90);
    delay(400);

//forward
  right.write(20);
  left.write(130);
  delay(600);

    //turn left
    right.write(20);
    left.write(90);
    delay(360);

        //stop
    left.write(90);
    right.write(90);
    delay(400);

    //forward
  right.write(20);
  left.write(130);
  delay(1300);

  //stop
   right.write(90);
   left.write(90);

    delay(400);

    //right turn
    right.write(90);
    left.write(130);
    delay(340);

  //stop
    left.write(90);

    delay(300);

    
  //forward
  right.write(20);
  left.write(130);
  delay(690);

  //stop
    left.write(90);
    right.write(90);
    delay(300);

    //back up
    right.write(110);
    left.write(60);
    delay(340);

      //stop
    left.write(90);
    right.write(90);
    delay(300);

     //right turn
    right.write(90);
    left.write(130);
    delay(340);

  //stop
    left.write(90);

    delay(300);

 //forward
  right.write(20);
  left.write(130);
  delay(550);

  //stop
    left.write(90);
    right.write(90);
    delay(550);
    

    

}

void loop() {
  // put your main code here, to run repeatedly:

}
