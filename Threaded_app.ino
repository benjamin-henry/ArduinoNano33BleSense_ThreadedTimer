#include <threadedtimer.h>

ThreadedTimer t1;
int task1;

void hello(){
  Serial.println("hello");
}

void setup(){
  Serial.begin(115200);
  delay(200);  
  //execute hello() function every 1000 milliseconds
  task1 = t1.every(1000, hello);
}

void loop(){
  delay(5000); //main loop delay does not affect the running Timers
  Serial.println("hello again");
}
