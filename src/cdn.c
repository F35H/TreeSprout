#include "engDef.h"

bool gfxCdn(){
  if (move == true){
    sfRectangleShape_move(p->sprite, p->nPos); 
    p->pos = sfRectangleShape_getPosition(p->sprite); };
    
  sfRectangleShape_setPosition(p->sprite, p->pos );
  
  return true; };

bool evntCdn(sfEvent e){
   if (e.type == sfEvtKeyReleased) 
     { goto keyReleaseEvt; }; 
 
   switch(e.key.code){
     case sfKeyA:{ 
       move = true;
       p->nPos.x = -(p->vlcty); }
     break;
     case sfKeyD:{ 
       move = true;
       p->nPos.x = p->vlcty; }
     break;
     case sfKeyLeft:{ 
       move = true;
       p->nPos.x = -(p->vlcty); }
     break;
     case sfKeyRight:{ 
       move = true;
       p->nPos.x = p->vlcty; }
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