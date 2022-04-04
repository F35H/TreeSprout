#include "engDef.h"

int main (){

  if(
  !geninit() ||
  !genlp() ||
  !genclose() )
  { return -1; }
  else 
  { return 0; } };


//Place Emergency Window in ErrCheck!

//Rewrite errInit to use fgets and string parsing.
