#include "engDef.h"

bool gen::lp(){
  while(
    err::chck(
      events::lp(),
      gfx::lp() ); );    
  return false;
  
  wBreak: return true; };

bool events::lp(){
  al_wait_for_event(q, e);
  
  switch(e.type) {
    case ALLEGRO_EVENT_TIMER:
    { gfx::flip  = true; }
    break;
    
    case ALLEGRO_EVENT_DISPLAY_CLOSE:
    { gfx::flip  = true; }
    break; }; 
    
  return true; }; 
  
    
bool gfx::lp(){
  if(flip == true && 
  al_is_event_queue_empty(q)) {
    
    float x, y;
    x = 100;
    y = 100;
  
    al_clear_to_color(al_map_rgb(0,0,0));   
    al_draw_textf(font, al_map_rgb(255,255,255), 0,0,0 "X: %.1f Y: %.1f", x,y);   
    al_draw_filled_rectangle(x, y, x + 10, y + 10, al_map_rgb(255, 0, 0));   
    
    al_flip_display();
    
    flip  = false; };
    
  return true;  
  
    