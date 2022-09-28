#include "ledcontrol.hpp"

void LedControl::set(const UI8 ledData)
/* If I understood correctly swift-register takes input of 8 bit
and directs it to output pins. There are 8 output leds.
in order to turn on the first one ledData should be 00000001
*/
{
  /*
  In this loop I am iterating over the input data
  and setting or cleaning pins according to the truth table
  */
  int number = ledData;
  for (int i = 7; i >= 0; i--) {
    bit = number % 2;
    if (bit == 0)
      {
        clearPin(pinLedDat_);
      } else
      {
        setPin(pinLedDat_);
      }
     setPin(pinLedSck_);
     clearPin(pinLedSck_);
     number /= 10;

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
