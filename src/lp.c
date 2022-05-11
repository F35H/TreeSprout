#include "engDef.h"

bool genLp(){
  while(sfRenderWindow_isOpen(wind)){
    if (!errChck(gfxLp())){ break; }
    if (!errChck(evntLp())){ break; } };  
  return false; };

bool evntLp(){
  sfEvent e;
   
 if(sfRenderWindow_pollEvent(wind,&e)){     
   switch(e.type){   
     case sfEvtClosed: {
       sfRenderWindow_close(
         wind); } break;
       
     case sfEvtLostFocus: {
     } break;
       
     case sfEvtGainedFocus: {
     } break;
       
     case sfEvtKeyPressed:
       {move = true; }
       break;
            
     case sfEvtKeyReleased: 
       { move = false; }
       break; };
       
   switch(e){
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
     case sfKeySpace: {
       if (jump == false)
         {p->pPos = p->pos; };
       jump = true;
       move = true; } 
       break;
     case sfKeyA: 
       { move = false; }
       break;
     case sfKeyD: 
       { move = false; }
       break;
     case sfKeyLeft: 
       { move = false; }
       break;
     case sfKeyRight: 
       { move = false; }
       break; }; 
     
 return true; };
    
bool gfxLp(){
  sfRenderWindow_clear(wind, sfBlack);
  
  if (move == true){
    sfRectangleShape_move(p->sprite, p->nPos); 
    p->pos = sfRectangleShape_getPosition(p->sprite); };
  
  if ( p->pos.x <= cllsn->x)
    { p->pos.x = ( cllsn->x + 1 ); return true; };
  if ( p->pos.x >= cllsn->y)
    { p->pos.x = ( cllsn->y  - 1); return true;};

  sfRectangleShape_setPosition(p->sprite, p->pos );
    
       
  const sfRenderStates* s;
  
  sfRectangleShape_setSize(p->sprite, p->size);
  sfRectangleShape_setFillColor(p->sprite, sfRed);
  
  sfRenderWindow_drawRectangleShape(wind,p->sprite,s);
  
  sfRenderWindow_display(wind);

  
  return true; };