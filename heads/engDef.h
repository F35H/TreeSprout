#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdarg.h>
#include <time.h>
#include <pthread.h>

#include <SFML/Window.h>
#include <SFML/Graphics.h>

//Player
typedef struct player {
  short vlcty;
  sfVector2f pos;
  
  sfVector2f size;
  sfRectangleShape* sprite; }
  plyr;

  
//General
bool genInit();
bool genLp();
bool genClose();

plyr* p;    
bool move;

//Graphics
sfRenderWindow* wind;

bool gfxInit();
bool gfxLp(); 
bool gfxCdn();

//Evemts
bool evntInit();
bool evntLp();
bool evntCdn();

//Error Handling
short numLog;

bool errInit(); 
bool  errChck(bool itm,...);
bool  errFPrint(const char* str);
  