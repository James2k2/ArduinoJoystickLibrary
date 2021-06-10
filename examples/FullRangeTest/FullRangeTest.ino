// uint16 test for Joystick

#include "Joystick2.h"

// Config Joystick
Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID,JOYSTICK_TYPE_GAMEPAD,
  0, 0,                   // Button Count, Hat Switch Count
  true, true, false,      // X, Y, no Z Axis
  false, false, false,    // No Rx, Ry, or Rz
  false, false,           // No rudder or throttle
  false, false, false);   // No accelerator, brake, or steering


void setup() {
  Serial.begin(115200);
  
  // Set Range Values
  Joystick.setXAxisRange(0, 65535);
  Joystick.setYAxisRange(0, 65535);

  Joystick.begin();

  // Run around
  Joystick.setXAxis(0);
  Joystick.setYAxis(0);

  delay(100);
  Joystick.setXAxis(65535);
  Joystick.setYAxis(65535);

  delay(100);
  Joystick.setXAxis(32767);
  Joystick.setYAxis(32767);
  
  delay(5000);
}

void loop() {
  Joystick.setXAxis(0);
  Joystick.setYAxis(0);
  delay(1000);
  
  Joystick.setXAxis(65535);
  Joystick.setYAxis(65535);
  delay(1000);
  
  Joystick.setXAxis(32767);
  Joystick.setYAxis(32767);
  delay(1000);
}
