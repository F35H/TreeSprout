#include "engDef.h"

int main (){

  if(
  !genInit() ||
  !genLp() )
  { return -1; }
  else 
  { return 0; } };


//Place deletion for errlog in txt for errFprint
//Find what is wrong so it can continue counting up