#include "libs.h"

typedef struct window {
  sfVideoMode vM; 
} win; 

typedef struct sprite {
  float vlcty;
  sfVector2f pos;
  sfVector2f nPos;
  sfVector2f pPos;
  sfVector3f cllsn;
  
  sfVector2f size;
  sfRectangleShape* sprite; }
  sprite;
  
struct bins {
  short* (*binOne)[499];
  short* (*binTwo)[499];
  short* (*binThr)[499];
  
  sfRectangleShape* sprite;
  sfVector2f size;
  
  sfVector2f pos; };
  
//trees
struct trees {
};