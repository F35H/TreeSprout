#include "engDef.h"

int main (){

  if(
  !genInit() ||
  !genLp() )
  { return -1; }
  else 
  { return 0; } };

//Fix error print to remove the errLog from bin by copying
//from txt file before appending, recopying, then deleteing

//Wipe smaller functions from main c files. Only one function in each.