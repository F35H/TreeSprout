#include "libs.h"


//Window
typedef struct window {
  sfVideoMode vM; 
} win; 

//Player
typedef struct player {
  float vlcty;
  sfVector2f pos;
  sfVector2f nPos;
  sfVector2f pPos;
  
  sfVector2f size;
  sfRectangleShape* sprite; }
  plyr;
  
//General
bool genInit();
bool genLp();
bool genClose();

win* w;
plyr* p;

sfVector3f* cllsn;    

//Graphics
sfRenderWindow* wind;

bool gfxInit();
bool gfxLp(); 
bool gfxCdn();

//Evemts
bool move;
bool jump;
sfClock* cl;

bool evntInit();
bool evntLp();
bool evntCdn();

//Error Handling
short numLog;

bool errInit(); 
bool  errChck(bool fn);
bool errTPrint(const char*  str);
void*  errFPrint(void* str);
  