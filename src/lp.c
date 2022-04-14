#include "engDef.h"

bool genLp(){
  if (sfRenderWindow_isOpen(
  wind) ){
  
    if (errChck(
    evntLp(),
    gfxLp() ) )
      { genLp(); }
    else
      { return false; }; };
  
  return true; };

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
     case sfEvtKeyReleased: {
     return errChck( evntCdn(e) ); }
     break; }; }; };
    
bool gfxLp(){
  sfRenderWindow_clear(wind, sfBlack);
  
  if ( !gfxCdn() ) return false;
     
  const sfRenderStates* s;
  
  sfRectangleShape_setSize(p->sprite, p->size);
  sfRectangleShape_setFillColor(p->sprite, sfRed);
  
  sfRenderWindow_drawRectangleShape(wind,p->sprite,s);
  
  sfRenderWindow_display(wind);

  
  return true; };