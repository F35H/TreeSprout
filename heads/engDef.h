#include "genTypes.h"
//#include "treeTypes.h"
#include "sorts.h"

//General
bool genInit();
bool genLp();
bool genClose();

scn* s;
win* w;
plyr* p;

sfVector3f* cllsn;    

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

//Error Handling
char numLog;

bool errInit(); 
bool  errChck(bool fn);
bool errTPrint(const char*  str);
void*  errFPrint(void* str);
  