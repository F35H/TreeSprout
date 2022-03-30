#include "engDef.h"

int main (){

  if(
  !gen::init() ||
  !gen::lp() ||
  !gen::close() )
  { return -1 }
  else 
  { return 0; } };


//Place Emergency Window in Err::Check!