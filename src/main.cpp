#include "ledcontrol.hpp"


int main()
{
  LedControl ledSet;
  ledSet.initialize();
  /*
  1 is off
  0 is on
  0b [led8] [led7] [led6] [led5]
     [led4] [led3] [led2] [led1]
  */
  ledSet.set(0b10111011);

  return 0;
}
