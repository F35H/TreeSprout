#include "engDef.h"

bool geninit(){
  if(!errinit())
    { return false; };

  return errchck(
    al_init(),
    gfxinit(),
    evntinit() ); };
    
bool gfxinit() {
  errFPrint("Initializing Graphics - File: Init.c");

  al_set_new_display_option(ALLEGRO_SAMPLE_BUFFERS, 
    1, ALLEGRO_SUGGEST);
  al_set_new_display_option(ALLEGRO_SAMPLES,
    8, ALLEGRO_SUGGEST); 
  al_set_new_bitmap_flags(ALLEGRO_MIN_LINEAR | 
    ALLEGRO_MAG_LINEAR);

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
    al_register_event_source(
      q, al_get_keyboard_event_source());
    al_register_event_source(
      q, al_get_display_event_source(d));
    al_register_event_source(
      q, al_get_timer_event_source(t));
    
    al_start_timer(t);
      
    return true; }
  else 
    return false; };
    
bool errinit(){
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
  else {
    for (tst = 0; c != EOF ; c = fgetc(fp), tst++ ) {
      if ( tst == 0 ) { numLog = c;
      printf("%d", numLog);  };
      if ( tst == 13 ) { tst = 0; }; }; };
      
  fclose(fp);    
  free(cmd);    
  system("del *.txt");
      
  if (numLog > 56 && numLog < 65) {
    system("cd \\..\\ & cd txt & del *.txt");
    return errinit(); }; 
    
  return true; };  

    
        