#include "MyLEDMode.h"
#include "Kaleidoscope-LEDControl.h"

namespace kaleidoscope {

void MyLEDMode::onActivate() {
  LEDControl.setCrgbAt(3, 14, CRGB(0x00, 0xff, 0xff));
  // Set up the rest of the colors whatever way you want to.
}
}

kaleidoscope::MyLEDMode MyLEDMode;
