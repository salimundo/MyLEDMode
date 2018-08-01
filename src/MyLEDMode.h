#pragma once

#include "Kaleidoscope.h"
#include "Kaleidoscope-LEDControl.h"

namespace kaleidoscope {
class MyLEDMode : public LEDMode {
 public:
  MyLEDMode() {}

  void onActivate() final;
};
}

extern kaleidoscope::MyLEDMode MyLEDMode;
