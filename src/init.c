#include "engDef.h"

bool genInit(){
  p = malloc(sizeof(plyr));
  w = malloc(sizeof(win));
  s = malloc(sizeof(scn)); 
  cllsn = malloc(sizeof(sfVector3f));
        
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

  p->sprite = sfRectangleShape_create();
  
  s->grnd = sfRectangleShape_create();
  sfTexture* tempTex = sfTexture_createFromFile(
    "img/120px-Ground_(front_layer).png",NULL);
  
  if (!tempTex)
    { errTPrint(
    "Failed Texture Init");
    return false;}
    
  sfRectangleShape_setTexture(s->grnd,tempTex,true);
  
  if (!errChck(wind))
    { return false; };  
  return true; };
    
bool evntInit() {
  errTPrint("Initializing Events - File: Init.c");         
               
  cl = sfClock_create();         
  
  cllsn->x = ((w->vM.width)*0.05f); //left
  cllsn->y = ((w->vM.width)*0.95f); //right
  cllsn->z = ((w->vM.height)*0.75f); //ground
           
  move = false;
  jump = false;
    
  p->vlcty = 2;
  p->pos.x = ((w->vM.width)*0.5f);
  p->pos.y = ((w->vM.height)*0.75f);
  
  p->pPos = p->pos;  
  
  p->nPos.x = 0.0f;
  p->nPos.y = 0.0f;
    
  p->size.x = 30;
  p->size.y = 30;
  
  
             
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
  
  