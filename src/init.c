#include "engDef.h"

bool genInit(){
  if(!errInit())
    { return false; };

  return errChck(
    gfxInit(),
    evntInit() ); };
    
bool gfxInit() {
  errFPrint("Initializing Graphics - File: Init.c");
  
  sfVideoMode vM = {800, 600, 8};
    
  wind = sfRenderWindow_create(
    vM, "TreeSprout",
    sfDefaultStyle,
    sfContextDefault);
    
  return errChck(
    wind ); };
    
bool evntInit() {
  errFPrint("Initializing Events - File: Init.c");
           
    return true;  };
    
bool errInit(){
  const char* file  = "temp.txt";
     
  char* cmd = 
    ( char* )malloc(sizeof(char*)
    *(25 + sizeof(file)));
     
  strcpy(cmd, "cd.. & md txt");
  system( cmd );
  
  strcpy(cmd, 
    "cd.. & dir txt /b >> bin/");
  strcat(cmd, file);
  system( cmd ); 
  
  FILE* fp = fopen(file, "r");
  int c = fgetc(fp);
  volatile short tst;
  
  if(!fp) { return false; }
  else if(feof(fp)) { numLog = 48; }
  else {
    for (tst = 0; !feof(fp) ; c = fgetc(fp), tst++ ) {
      if ( tst == 0 ) { numLog = c + 1; };
      
      if ( tst == 11 ) { tst = -1; }; }; };   
   
  fclose(fp);    
  free(cmd);    
  system("del *.txt");
      
  if (numLog > 56) {
    system("cd \\..\\ & del /q txt");
    return errInit(); }; 
    
  return true; };  
