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
  
//Scene
typedef struct scene {
  sfVector2f pos;
  sfVector2f nPos;
  sfVector2f pPos;

  sfVector3f size;
  sfRectangleShape* grnd;
  sfRectangleShape* bckgrnd;
  
  } scn;  
  
//bins
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