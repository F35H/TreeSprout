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
  void* vd = (void*)str;
  pthread_t* thrd = malloc(sizeof(pthread_t));
  short t = pthread_create(thrd,NULL,errFPrint,vd);
  if (t == 0){
  return true; };
  return false; };

void* errFPrint(void* vd){
  const char* str = (const char *)vd;

  time_t t = time(NULL);
  const char* tm = 
    asctime(gmtime(&t));
  
   char* file = 
    (char* )malloc(sizeof(char)
    *(13));
   char* strng = 
    (char* )malloc(sizeof(char)
    *(strlen(tm) + strlen(str) + 6));
    
  sprintf(file, "%c", numLog);    
  strcat(file, "errLog");
  strcat(file, ".txt");
  
  strcpy(strng, tm);
  strcat(strng, " ");
  strcat(strng, str);
  strcat(strng, "\n \0");
      
  FILE* fp = fopen(file, "a");
  
  if (!fp) { return vd; }
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
  
  return vd; };         