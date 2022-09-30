#include "ledcontrol.hpp"

void LedControl::set(const UI8 ledData)
/* If I understood correctly swift-register takes input of 8 bit
and directs it to output pins. There are 8 output leds.
in order to turn on the first one ledData should be 00000001
*/
{
  /*
  this left shifting bitwise algorithm should do a better job.
  */
//
  unsigned int bits = ledData;
  for (int i = 0 ; i != 8 ; i++) {
    if (bits & (1 << i)) {
    // bit == 1
      clearPin(pinLedDat_);
    } else {
        // bit == 0, active level of LED?
        setPin(pinLedDat_);
    }
    setPin(pinLedSck_);
    clearPin(pinLedSck_);
}
//After loop latch activation?
setPin(pinLedRck_);
setPin(pinLedSck_);
clearPin(pinLedSck_);
clearPin(pinLedRck_);
setPin(pinLedSck_);
clearPin(pinLedSck_);
}

void LedControl::initialize()
{

setPin(pinLedRck_);
clearPin(pinLedSck_);
clearPin(pinLedDat_);
}

void LedControl::clearPin(const UI32 pin)
{
//assuming it sets pin to LOW
}

void LedControl::setPin(const UI32 pin)
{
////assuming it sets pin to HIGH
}
