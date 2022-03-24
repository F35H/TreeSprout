#include "engDef.h"

int main (){

  if(
  !gen::init() ||
  !gen::lp() ||
  !gen::destroy() )
  { return -1 }
  else 
  { return 0; } };

