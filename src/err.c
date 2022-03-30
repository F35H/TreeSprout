#include "engDef.h"

bool errchck(bool itm,...){
  va_list vlist;
  va_start(vlist, itm);
  
  for(short i = 0; i < itm; i++){ 
    if(!va_arg(vlist, int)){
    errFPrint("ERROR: Check last Callback!");
    return false; } };
    
  return true; };

bool errFPrint(const char* str){
  time_t t = time(NULL);
  const char* tm = 
    asctime(gmtime(&t));
  
   char* file = 
    (char* )malloc(sizeof(char)
    *(12));
   char* strng = 
    (char* )malloc(sizeof(char)
    *(sizeof(tm) + sizeof(str) + 2));
      
  strcpy(file, "errLog");
  sprintf(file, "%d", numLog);
  strcat(file, ".txt");
  
  strcpy(strng, tm);
  strcpy(strng, " ");
  strcat(strng, str);
  strcat(strng, "\n");
      
  FILE* fp = fopen(file, "a");
  
  if (fp) { fputs(strng, fp); }
  else { return false; };   
  
  fclose(fp);
  
  free(file);
  free(strng);
  return true; };         

