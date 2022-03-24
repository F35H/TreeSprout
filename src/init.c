#include "engDef.h"

bool gen::init(){
  return err::chck(
    al_init(),
    gfx::init(), 
    inpt::init(),
    snd::init() ); };
    
bool gfx::init() {

  al_set_new_display_option(ALLEGRO_SAMPLE_BUFFERS, 
    1, ALLEGRO_SUGGEST);
  al_set_new_display_option(ALLEGRO_SAMPLES,
    8, ALLEGRO_SUGGEST); 
  al_set_new_bipmap_flags(ALLEGRO_MIN_LINEAR | 
    ALLEGRO_MAG_LINEAR | ALLEGRO_MIPMAP);

  d = al_create_display(680, 400);
  f = al_create_font();

  return err::chck(
    d, f,
    al_init_primitives_addion() };
    
bool events::init() {
  
  t = al_create_timer(1.0/60.0);
  q = al_create_event_queue();

  if (err::chck(
    t, q,
    al_install_keyboard()); ) {
      al_register_event_source(q, al_get_keyboard_event_source());
      al_register_event_source(q, al_get_display_event_source(gfx::d));
      al_register_event_source(q, al_get_timer_event_source(t));
    
      al_start_timer(t);
      
      return true; 
  else
    return false; };
    
        