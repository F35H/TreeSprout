#include "engDef.h"

bool genclose() {
  return errchck(
    gfxclose(),
    evntclose() ); };
    
bool gfxclose(){
  al_destroy_font(f);
  al_destroy_display(d);
  
  return true; };
  
  bool evntclose(){
    al_destroy_timer(t);
    al_destroy_event_queue(q);
    
    return true; };
    


