# Analog Controller

## The Idea
Using a potentiometer to accurately control the output of a servo motor

## Example Code

```cpp
#include <ESP32Servo.h>

const int analogInPin1 = 32;
const int servoPin = 23; 
int stickPos1 = 0;
Servo myservo;

void setup() {
  myservo.attach(servoPin);

}

void loop() {
    stickPos1 = analogRead(analogInPin1);
   myservo.write(map(stickPos1,0,4096,0,180));

  delay(20);
}
```

## Resources

- [Espressif Esp32 Repository](https://github.com/espressif/arduino-esp32.git)
- [Esp 32 Diagram](https://raw.githubusercontent.com/AchimPieters/esp32-homekit-camera/master/Images/ESP32-30PIN-DEVBOARD.png)