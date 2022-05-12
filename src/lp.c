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
         wind);
         return true; } 
       
     case sfEvtLostFocus: 
       { return true; } 
       
     case sfEvtGainedFocus: 
       { return true; }
       
     case sfEvtKeyPressed:
       {move = true; }
       break;
            
     case sfEvtKeyReleased: 
       { move = false;
       return true; } } };
       
   switch(e.key.code){
     case sfKeyA:     
     case sfKeyLeft: {
       p->nPos.x =-( p->vlcty); } 
       break;
       
     case sfKeyD:
     case sfKeyRight:{ 
       p->nPos.x = p->vlcty; }
       break; 
       
     case sfKeySpace: {
       if (jump == false)
         {p->pPos = p->pos; };
       jump = true; } 
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
    
       
  const sfRenderStates* state;
  
  sfRectangleShape_setSize(p->sprite, p->size);
  sfRectangleShape_setFillColor(p->sprite, sfRed);
  
  sfRenderWindow_drawRectangleShape(wind,s->grnd,state);
  sfRenderWindow_drawRectangleShape(wind,p->sprite,state);
    
  sfRenderWindow_display(wind);
  
  return true; };