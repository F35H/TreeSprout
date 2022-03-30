#include "engDef.h"

bool err:chck(bool itm,..){
  va_list vlist;
  va_start(vlist, itm);
  
  for(short i; i < itm; i++){ 
    if(!va_arg(vlist, bool)){
    err:fPrint("ERROR: Check last Callback!");
    return false; } };
    
  return true; };

bool fPrint(const char* str){
  const char* tm = 
    asctime(gmtime(time(NULL)));
  
  unsigned char* file = 
    (char* )malloc(sizeof(char)
    *(12);
  unsigned char* strng = 
    (char* )malloc(sizeof(char)
    *(sizeof(tm) + sizeof(str) + 1;
      
  strcpy(file, "errLog");
  strcat(file, numLog);
  strcat(file, ".txt");
  
  strcpy(strng, tm);
  strcpy(strng, " ");
  strcat(strng, str);
      
  FILE* fp = fopen(file, "a");
  
  if (fp) { puts(fp, strng); }
  else { return false; };   
  
  fclose(fp);
  return true; };         

