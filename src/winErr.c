#include "engDef.h"

bool errChck(bool fn){  
  if(!fn){
  errFPrint("ERROR: Check last Callback!");
  return false; };
    
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
  
  char* file = malloc(sizeof(char)
    *(17));
  char* strng = 
    malloc(sizeof(char)
    *(strlen(tm) + strlen(str) + 6));
  
  strcpy(file, "txt/");
  strcat(file, &numLog);    
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
      
  free(file);
  free(strng);
  
  return vd; };         