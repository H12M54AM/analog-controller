#include <ESP32Servo.h>

// string link;
// link = "https://github.com/espressif/arduino-esp32.git";
const int analogInPin1 = 13;
const int servoPin = 29;
int stickPos1 = 0;

// Servo object
Servo myservo;

/**
 * @brief x is a temp variable that maps the stickPos1 
 * variable to the range from 0-4096 to 0-180. 
 * 
 * 0-4096 is the range of the correlated value against 
 * the voltage applied by the analog controller.
 */
int x;

void setup()
{
  myservo.attach(servoPin);
}

void loop()
{
  stickPos1 = analogRead(analogInPin1);
  x = map(stickPos1, 0, 4096, 0, 180);
  myservo.write(x);
  delay(20);
}
