#include "engDef.h"

bool genInit(){
  plyr = malloc(sizeof(sprite));
  grnd = malloc(sizeof(sprite));
//  sky = malloc(sizeof(sprite));
  
  w = malloc(sizeof(win));
          
 if( !errChck( errInit() ))
   { return false; };
 if( !errChck( gfxInit() ))
   { return false; };
 return  errChck( evntInit() );  };
        
bool gfxInit() {
  errTPrint("Initializing Graphics - File: Init.c");
  
  w->vM.width = 1800;
  w->vM.height = 1000;
  w->vM.bitsPerPixel = 8;
    
  wind = sfRenderWindow_create(
    w->vM, "TreeSprout",
    sfDefaultStyle,
    sfContextDefault);    

  plyr->sprite = sfRectangleShape_create();
  grnd->sprite = sfRectangleShape_create();
  
  sfTexture* tempTex = sfTexture_createFromFile(
    "img/120px-Ground_(front_layer).png",NULL);
  
  if (!tempTex)
    { errTPrint(
    "Failed Texture Init");
    return false;}
    
  sfRectangleShape_setTexture(
    grnd->sprite,tempTex,true); 
  
  setSpriteSize(plyr, 30, 30);
  setSpriteSize(grnd, 
    ((w->vM.width * 3)), 
    w->vM.height);
    
   sfRectangleShape_setOrigin();
  
  if (!errChck(wind))
    { return false; };  
  return true; };
    
bool evntInit() {
  errTPrint("Initializing Events - File: Init.c");         
               
  cl = sfClock_create();         
  
  move = false;
  jump = false;    
    
  setSpritePos(plyr, 
  (w->vM.width * 0.5), 
  (w->vM.height * 0.75), 2);
    
  setSpritePos(grnd, 0, 0, plyr->vlcty);  
    
  setSpriteCllsn(plyr,    
    ((w->vM.width)*0.05f),
    ((w->vM.width)*0.95), 0);  
    
  setSpriteCllsn(grnd,     
    ((w->vM.width)*0.165f),
    ((w->vM.width)*0.825f), 0);  
  
  return true;  };
    
bool errInit(){
  const char* file  = "temp.txt";
     
  char* cmd = 
    malloc(sizeof(char*)
    *(25 + sizeof(file)));

  chdir("..");
  
  mkdir("txt");     
       
  strcpy(cmd, 
    "dir txt /b >> ");
  strcat(cmd, file);
  system( cmd ); 
  
  FILE* fp = fopen(file, "r");
  int c = fgetc(fp);
  short tst;
  
  if(!fp) {  return false; }
  else if(feof(fp)) { numLog = 48; }
  else {
    for (tst = 0; !feof(fp) ; c = fgetc(fp), tst++ ) {
      if ( tst == 0 ) { numLog = c + 1; };
      
      if ( tst == 11 ) { tst = -1; }; }; };   
   
  fclose(fp);    
  free(cmd);    
  system("del *.txt");
      
  if (numLog > 56) {
    system("del /q txt");
    return errInit(); }; 
    
  return true; };  
    
  