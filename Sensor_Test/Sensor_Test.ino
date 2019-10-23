#include <WemosInit.h>
#include <Servo.h> 

#define motor1pin D0 //left
#define motor2pin D2 //right

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
  
    long distance;
  long duration;
  duration = ultrasonicPing(D8, D5);
  distance = microsecondsToInches(duration);
  Serial.println(distance);

    if (distance <= 1 && distance != 0){
      //stop trun

         motor1.write(90);
        motor2.write(90);
        delay(2000);
        motor1.write(0);
        motor2.write(0);
        delay(246);
    
        motor1.write(90);
        motor2.write(90);
        delay(3000);


    }

    else if (distance == 2 && distance != 0){
      //stop trun

       motor1.write(90);
        motor2.write(90);
        delay(2000);
        motor1.write(0);
        motor2.write(0);
        delay(245);
    
        motor1.write(90);
        motor2.write(90);
        delay(3000);

    }


    else{
      //forward

//        motor1.write(145);
//        motor2.write(60);

        motor1.write(110);
        motor2.write(75);

    }


    

}



long microsecondsToInches (long microseconds) {
  return microseconds/74/2;
}
