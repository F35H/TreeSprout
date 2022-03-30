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

//Rewrite errInit so it works.

//Make it where C writes the contents without changing directories
// then moving the necessary file