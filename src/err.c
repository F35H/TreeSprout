#include "engDef.h"

bool errChck(bool itm,...){
  va_list vlist;
  va_start(vlist, itm);
  
  for(short i = 0; i < itm; i++){ 
    if(!va_arg(vlist, int)){
    errFPrint("ERROR: Check last Callback!");
    return false; } };
    
  return true; };

bool errTPrint(const char* str){
  thrd_t* thrd;
  short t = thrd_create(thrd,errFprint,str)
  switch(t){
  default: return true;
  break;
  case thrd_error:
  case thrd_nomem:
  return false;
  break; }; };

bool errFPrint(const char* str){
  time_t t = time(NULL);
  const char* tm = 
    asctime(gmtime(&t));
  
   char* file = 
    (char* )malloc(sizeof(char)
    *(13));
   char* strng = 
    (char* )malloc(sizeof(char)
    *(strlen(tm) + strlen(str) + 53));
    
  sprintf(file, "%c", numLog);    
  strcat(file, "errLog");
  strcat(file, ".txt");
  
  strcpy(strng, tm);
  strcat(strng, " ");
  strcat(strng, str);
  strcat(strng, "\n \0");
      
  FILE* fp = fopen(file, "a");
  
  if (!fp) { return false; }
  else { fputs(strng, fp);
  fclose(fp); };   
  
  strcpy(strng, "cd  \"..\"  & del /q txt\\");
  strcat(strng, file);
  system( strng );
  
  strcpy(strng, "copy \"..\\bin\\");
  strcat(strng, file);
  strcat(strng, "\"  \"..\\txt\"");
  system( strng );
  
  free(file);
  free(strng);
  
  return true; };         