#include "ledcontrol.hpp"


int main()
{
  LedControl ledSet;
  ledSet.initialize();
  ledSet.set(00100100);
  
  return 0;
}
