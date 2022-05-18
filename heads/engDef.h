#include "genInline.h"

//#include "treeTypes.h"

#include "sorts.h"

//General
bool genInit();
bool genLp();
bool genClose();

sprite* plyr;
sprite* grnd;

win* w;

//Graphics
sfRenderWindow* wind;

bool gfxInit();
bool gfxLp(); 

//Evemts
bool move;
bool jump;
sfClock* cl;

bool evntInit();
bool evntLp();

bool spriteEvntInit(
  sprite* s, int sizeX, 
  int sizeY, int posX, 
  int posY, int vlcty, 
  int colX, int colY, 
  int colZ);

//Error Handling
char numLog;

bool errInit(); 
bool  errChck(bool fn);
bool errTPrint(const char*  str);
void*  errFPrint(void* str);
  