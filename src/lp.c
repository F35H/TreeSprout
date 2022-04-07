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
 sfEvent* e;
   
 if(sfRenderWindow_pollEvent(
 wind,e)){
   if(e->type 
   == sfEvtClosed) 
     {sfRenderWindow_close(
     wind); }; };
    
  return true; };
    
bool gfxLp(){

  return true; };