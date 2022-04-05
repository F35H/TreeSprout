cd..
cd #include <stdio.h>
#include <stdlib.h>
#include <allegro5/allegro5.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_primitives.h>

//General
bool geninit();
bool genlp();
bool genclose(); 
  
//Allegro
bool flip;

ALLEGRO_DISPLAY* d;
ALLEGRO_FONT* f;

bool allegInit();
bool allegLP();
bool allegClose(); 

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
  