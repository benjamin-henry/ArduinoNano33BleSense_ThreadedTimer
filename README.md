# ArduinoNano33BleSense_ThreadedTimer

First of all, download the following library and unzip it in "C:/Users/[YOUR_USERNAME]/Documents/Arduino/libraries"
https://github.com/Aduen/ThreadedTimer.git

Then create an Arduino project, and paste the following code :

```cpp
#include <threadedtimer.h>

ThreadedTimer t1;

int task1;

//executing in Timer Thread
void hello()
{
  Serial.println("hello");
}

void setup()
{
  Serial.begin(115200);
  delay(200);
  
    //execute hello() function every 1000 milliseconds
  task1 = t1.every(1000, hello);
}

void loop()
{
  delay(5000); //main loop delay does not affect the running Timers
    Serial.println("hello again");
}
```
