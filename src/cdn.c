#include "engDef.h"

bool gfxCdn(){
  if (move == true){
    sfRectangleShape_move(p->sprite, p->nPos); 
    p->pos = sfRectangleShape_getPosition(p->sprite); };

  if ( p->pos.x <= cllsn->x)
    { p->pos.x = ( cllsn->x + 1 ); return true; };
  if ( p->pos.x >= cllsn->y)
    { p->pos.x = ( cllsn->y  - 1); return true;};

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
       if (jump == false){p->pPos = p->pos; };
       jump = true;
       move = true;
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