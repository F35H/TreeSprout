#include <stdio.h>
#include <stdlib.h>
#include <allegro5/allegro5.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_primitives.h>

namespace gen {
  void init();
  void lp();
  void close(); };
  
namespace gfx {
  void init();
  void lp(); };

namespace inpt {
  void init();
  void lp(); };

namespace snd() {
  void init(); };

namespace err {
  void chck(const char* str, bool itm,...); };