#include "engDef.h"

bool geninit(){
  if(!errinit())
    { return false; };

  return errchck(
    al_init(),
    evntinit(),
    gfxinit() ); };
    
bool gfxinit() {
  errFPrint("Initializing Graphics - File: Init.c");

  al_set_new_display_option(ALLEGRO_SAMPLE_BUFFERS, 
    1, ALLEGRO_SUGGEST);
  al_set_new_display_option(ALLEGRO_SAMPLES,
    8, ALLEGRO_SUGGEST); 
  al_set_new_bitmap_flags(ALLEGRO_MIN_LINEAR | 
    ALLEGRO_MAG_LINEAR | ALLEGRO_MIPMAP);

  d = al_create_display(680, 400);
  f = al_create_builtin_font();

  return errchck(
    d, f,
    al_init_primitives_addon()); };
    
bool evntinit() {
  errFPrint("Initializing Events - File: Init.c");
  
  t = al_create_timer(1.0/60.0);
  q = al_create_event_queue();

  if (errchck(
       al_install_keyboard(), t, q )) {
      al_register_event_source(q, al_get_keyboard_event_source());
      al_register_event_source(q, al_get_display_event_source(d));
      al_register_event_source(q, al_get_timer_event_source(t));
    
      al_start_timer(t);
      
      return true; }
  else 
    return false; };
    
bool errinit(){
  const char* file  = "temp.txt";
     
  char* cmd = 
    ( char* )malloc(sizeof(char*)
    *(20 + sizeof(file)));
     
  strcpy(cmd, "cd txt & dir /b >> ");
  strcat(cmd, file);
  system( cmd ); 
   
  strcpy(cmd, "/txt/");
  strcat(cmd, file);
  printf(cmd);
    
  FILE* fp = fopen(cmd, "r");
  char c;
  short count;
    
  if(!fp){
    c = fgetc(fp);
    count = 0;
    numLog = -1;
    
    while (c != EOF){
      if (count == 6){
        numLog = (short)c;
        
        if (c == 'x') { break;};
        if (numLog == 0 || 9) { break;}; };
    
      if (count == 12) 
        { count = 0; };
      
      count++;
      c = fgetc(fp); };    
    fclose(fp);
     
    switch(c){
     case 'x':
     case EOF:{
       strcpy(cmd, "del ");  
       strcat(cmd, file);  
       system( cmd );
       
       free(cmd); }
     break;
     case '9': 
     default: { 
        strcpy(cmd, "cd..");
        system( cmd );

        strcpy(cmd, "del txt");
        system( cmd );
          
        strcpy(cmd, "Y");
        system( cmd );
        
        free(cmd);  
        return errinit(); }
      break; }; }
  else {
    if(c == 'L'){
      fclose(fp);
      
      strcpy(cmd, "del ");
      strcat(cmd, file);
      system( cmd );
        
      strcpy(cmd, "md txt");
      system( cmd );
        
      free(cmd);
      return errinit(); }; };
    
  return false; };  

    
        