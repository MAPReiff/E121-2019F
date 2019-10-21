#include <WemosInit.h>

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200); //check sensor data
  pinMode(D8,OUTPUT); 
  pinMode(D5,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
    long distance;
  long duration;
    duration = ultrasonicPing(D8, D5);
  distance = microsecondsToInches(duration);
  Serial.println(distance);

  

}

long microsecondsToInches (long microseconds) {
  return microseconds/74/2;
}
