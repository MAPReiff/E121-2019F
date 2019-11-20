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

//to point 4
  right.write(20);
  left.write(130);
  delay(750);

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
    delay(400);

    //code from 4

        //forward to 3/b
    right.write(20);
    left.write(130);
    delay(1515);

        //stop
    left.write(90);
    right.write(90);
    delay(400);

    //turn left to B
   right.write(20);
    left.write(90);
  delay(400);

  //stop
  right.write(90);
  left.write(90);
  delay(600);

// ====================

//forward to B
    right.write(20);
    left.write(130);
//    delay(872);
    delay(730);


//stop at B
    right.write(90);
    left.write(90);
    delay(400);

//back up
    right.write(110);
    left.write(60);
    delay(695);

  //stop
  left.write(90);
  right.write(90);

  delay(400);

  //left turn
  right.write(20);
  left.write(90);
  delay(180);

  //stop
  right.write(90);
  delay(400);

  //forward
  right.write(20);
  left.write(130);
  delay(1050);

  //stop
 right.write(90);
 left.write(90);

 delay(400);

 //turn left
   right.write(20);
  left.write(90);
  delay(380);

  //stop
  right.write(90);
  left.write(90);
  delay(600);

  //forward to D
  right.write(20);
left.write(130);
delay(400);

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
    delay(835);

//stop
    right.write(90);
    left.write(90);
    delay(400);

    //forward to A

    right.write(20);
    left.write(130);
    delay(700);

    //stop
    right.write(90);
    left.write(90);
    delay(300);
    

//back up
    right.write(110);
    left.write(60);
    delay(165);

    //stop
    left.write(90);
    right.write(90);
    delay(500);

    //turn arround
    right.write(90);
    left.write(130);
    delay(750);

    //stop
    left.write(90);
    right.write(90);
    delay(400);

//forward back to D
  right.write(20);
  left.write(130);
  delay(400);

//stop
left.write(90);
right.write(90);
delay(400);
  

    //turn left
    right.write(20);
    left.write(90);
    delay(400);

        //stop
    left.write(90);
    right.write(90);
    delay(400);

    //forward
  right.write(20);
  left.write(130);
  delay(690);

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

    
  //forward to C
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
    delay(175);

      //stop
    left.write(90);
    right.write(90);
    delay(300);

// ====================

//right turn
    right.write(90);
    left.write(130);
    delay(390);

//stop
    left.write(90);

    delay(300);

//forward to 4
      right.write(20);
    left.write(130);
    delay(1500);

        //stop
    left.write(90);
    right.write(90);
    delay(400);


//right turn
    right.write(90);
    left.write(130);
    delay(300);

//stop
    left.write(90);

    delay(300);

    //forward 4 to 1
  right.write(20);
  left.write(130);
  delay(685);

  //stop
    right.write(90);
    left.write(90);
    delay(400);
    
    

    



}

void loop() {
  // put your main code here, to run repeatedly:

}
