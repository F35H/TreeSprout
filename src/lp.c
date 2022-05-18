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
     case sfKeyD:     
     case sfKeyRight: {
       grnd->nPos.x =-( grnd->vlcty); 
       plyr->nPos.x = grnd->vlcty; } 
       break;
       
     case sfKeyA:
     case sfKeyLeft:{ 
       grnd->nPos.x = grnd->vlcty;
       plyr->nPos.x = -( plyr->vlcty); }
       break; 
       
     case sfKeySpace: {
       if (jump == false)
         {grnd->pPos = grnd->pos; };
       jump = true; } 
       break; }; 
     
 return true; };
    
bool gfxLp(){
  sfRenderWindow_clear(wind, sfBlack);
  /*
  if (move == true){
    if ( grnd->pos.x <= grnd->cllsn.x ||
    grnd->pos.x >= grnd->cllsn.y){
      sfRectangleShape_move(plyr->sprite, plyr->nPos); 
      grnd->pos = sfRectangleShape_getPosition(plyr->sprite); }
    else{
      sfRectangleShape_move(grnd->sprite, grnd->nPos); 
      grnd->pos = sfRectangleShape_getPosition(grnd->sprite);  } };
*/

    if( grnd->pos.x <= grnd->cllsn.x ||
    grnd->pos.x >= grnd->cllsn.y){
     sfRectangleShape_move(grnd->sprite, grnd->nPos); 
     grnd->pos = sfRectangleShape_getPosition(grnd->sprite); };

  if ( plyr->pos.x <= plyr->cllsn.x)
    { plyr->pos.x = ( plyr->cllsn.x + 1 ); return true; };
  if ( plyr->pos.x >= plyr->cllsn.y)
    { plyr->pos.x = ( plyr->cllsn.y - 1); return true;};


  sfRectangleShape_setPosition(grnd->sprite, grnd->pos );
  sfRectangleShape_setPosition(plyr->sprite, plyr->pos );
    
       
  const sfRenderStates* state;
  
  sfRectangleShape_setSize(plyr->sprite, plyr->size);
  sfRectangleShape_setFillColor(plyr->sprite, sfRed);
  
  sfRectangleShape_setSize(grnd->sprite, grnd->size);
  
  sfRenderWindow_drawRectangleShape(wind,grnd->sprite,state);
  sfRenderWindow_drawRectangleShape(wind,plyr->sprite,state);
    
  sfRenderWindow_display(wind);
  
  return true; };