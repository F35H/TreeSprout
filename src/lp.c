#include "engDef.h"

bool genlp(){
  if (errchck(
  evntlp(),
  gfxlp() ) )
    { genlp(); }
  else{ return false; };
  
  return true; };

bool evntlp(){
  al_wait_for_event(q, &e);
  
  switch(e.type) {
    case ALLEGRO_EVENT_TIMER:
    { flip  = true; }
    break;
    
    case ALLEGRO_EVENT_DISPLAY_CLOSE:
    { flip  = true; }
    break; }; 
    
  return true; }; 
  
    
bool gfxlp(){
  if(flip == true && 
  al_is_event_queue_empty(q)) {
    
    float x, y;
    x = 100;
    y = 100;
  
    al_clear_to_color(al_map_rgb(0,0,0));   
    al_draw_textf(f, al_map_rgb(255,255,255), 0,0,0, "X: %.1f Y: %.1f", x,y);   
    al_draw_filled_rectangle(x, y, x + 10, y + 10, al_map_rgb(255, 0, 0));   
    
    al_flip_display();
    
    flip  = false; };
    
  return true; };
  
    