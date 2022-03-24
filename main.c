#include "engDef.h"

int main (){

  if(
  !gen::init() ||
  !gen::lp() ||
  !gen::close() )
  { return -1 }
  else 
  { return 0; } };

// Finish Err Print
// Add Err Print to Appropriate Functions
// Test