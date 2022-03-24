#import "engDef.h"

bool gen::close() {
  return err::chck(
    gfx::close(),
    events::close() ); };
    
bool gfx::close(){
  al_destroy_font(f);
  al_destroy_display(d);
  
  return true; };
  
  bool events::close(){
    al_destroy_timer(t);
    al_destroy_event_queue(q);
    
    return true; };
    


