#include <Arduino.h>
#line 1 "C:\\Users\\KOSTA\\arduino_project\\mcp2515\\mcp2515.ino"
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
#include <SPI.h>

//default address 0x40
//Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x40);
// you can also call it with a different address you want
//Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x41);
// you can also call it with a different address and I2C interface
//Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x40, Wire);

#line 12 "C:\\Users\\KOSTA\\arduino_project\\mcp2515\\mcp2515.ino"
void setup();
#line 22 "C:\\Users\\KOSTA\\arduino_project\\mcp2515\\mcp2515.ino"
void loop();
#line 12 "C:\\Users\\KOSTA\\arduino_project\\mcp2515\\mcp2515.ino"
void setup() {
  Serial.begin(9600);
  Serial.println("16 channel PWM test!");
  
  //pwm.setOscillatorFrequency(27000000);
  //pwm.setPWMFreq(1600);  // This is the maximum PWM frequency

  //Wire.setClock(400000);
}

void loop() {

}

