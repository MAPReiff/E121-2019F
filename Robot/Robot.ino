
#include <Servo.h> 
#include <WemosInit.h>

#define motor1pin D0 
#define motor2pin D2

Servo motor1; 
Servo motor2;

void setup()
{

Serial.begin(115200);
pinMode(D8,OUTPUT); 
pinMode(D5,INPUT);
motor1.attach(motor1pin); 
motor2.attach(motor2pin); 
motor1.write(180);
motor2.write(0);


}

void loop() 
{
Serial.println(ultrasonicPing(D8,D5));
delay(1000);

  if (ultrasonicPing(D8,D5) <= 500)
  {
    motor1.write(90);
    motor2.write(90);
    motor1.write(180);
    motor2.write(180);

    delay(750);
  }
  else
  {
    motor1.write(180);
    motor2.write(0);
  }
    motor1.write(180);
    motor2.write(0);
    delay(3000);
    motor1.write(90);
    motor2.write(90);
}
