#include "engDef.h"

bool gfxCdn(){
  
 if ( p->pos.x <= cllsn->x){ move = false; p->pos.x = ( cllsn->x + 1 ); };
 if ( p->pos.x >= cllsn->y){ move = false; p->pos.x = ( cllsn->y  - 1); };


  if (move == true){
    if (jump == true){
      if (p->pos.y >= cllsn->z){ jump = false; p->pos.y = (cllsn->z + 1); 
       p->nPos.y = (((pow((p->nPos.x - p->pPos.x), 2))/5)+ cllsn->z); };
    sfRectangleShape_move(p->sprite, p->nPos); 
    p->pos = sfRectangleShape_getPosition(p->sprite); };                
                  
  sfRectangleShape_setPosition(p->sprite, p->pos );
  return true; };

bool evntCdn(sfEvent e){
   if (e.type == sfEvtKeyReleased) 
     { goto keyReleaseEvt; };
     
   switch(e.key.code){
     case sfKeyA:     
     case sfKeyLeft: {
       move = true;
       p->nPos.x =-( p->vlcty); } 
     break;
     case sfKeyD:
     case sfKeyRight:{ 
       move = true;
       p->nPos.x = p->vlcty; }
     break; 
     case sfKeySpace:
       jump = true;
       move = true;
       p->pPos = p->pos;
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