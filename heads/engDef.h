#include <stdio.h>
#include <stdlib.h>
#include <allegro5/allegro5.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_primitives.h>

namespace gen {
  bool init();
  bool lp();
  bool close(); };
  
namespace gfx {

  bool flip;

  ALLEGRO_DISPLAY* d;
  ALLEGRO_FONT* f;

  bool init();
  bool lp();
  bool close(); };

namespace events {

  ALLEGRO_EVENT e;
  
  ALLEGRO TIMER* t;
  ALLEGRO_EVENT_QUEUE* q;
  
  bool init();
  bool lp();
  bool close(); };

namespace snd() {
  bool init(); };

namespace err {
  bool  chck(bool itm,...);
  void fPrint(const char* str); };