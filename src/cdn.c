#include "engDef.h"

bool gfxCdn(){
  if (move == true){
    p->pos.x += p->vlcty;
    sfRectangleShape_move(p->sprite, p->pos); }
  else{  sfRectangleShape_setPosition(p->sprite, p->pos); };
  return true; };

bool evntCdn(sfEvent e){
    errTPrint("evntCdn - file: cdn.c");

   if (e.type == sfEvtKeyReleased) 
     { goto keyReleaseEvt; }; 
 
   switch(e.key.code){
     case sfKeyA: { move = true; }
     break;
     case sfKeyD: { move = true; }
     break;
     case sfKeyLeft: { move = true; }
     break;
     case sfKeyRight: { move = true; }
     break; };   
       
  return true;
  
  keyReleaseEvt:
   switch(e.key.code){
     case sfKeyA: { move = false; }
     break;
     case sfKeyD: { move = false; }
     break;
     case sfKeyLeft: { move = false; }
     break;
     case sfKeyRight: { move = false; }
     break; }; 
  
  return true;};