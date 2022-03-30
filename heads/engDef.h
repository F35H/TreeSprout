#include <stdio.h>
#include <stdlib.h>
#include <allegro5/allegro5.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_primitives.h>

//General
bool geninit();
bool genlp();
bool genclose(); 
  
//Graphics
bool flip;

ALLEGRO_DISPLAY* d;
ALLEGRO_FONT* f;

bool gfxinit();
bool gfxlp();
bool gfxclose(); 

//Evemts
ALLEGRO_EVENT e;
  
ALLEGRO_TIMER* t;
ALLEGRO_EVENT_QUEUE* q;
  
bool evntinit();
bool evntlp();
bool evntclose(); 

//Error Handling
short numLog;

bool errinit(); 
bool  errchck(bool itm,...);
bool  errFPrint(const char* str);
  