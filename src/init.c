#include "engDef.h"

bool gen::init(){
  return err::chck(
    al_init(),
    err::init(),
    gfx::init(), 
    events::init(),
    snd::init() ); };
    
bool gfx::init() {
  err::fPrint("Initializing Graphics - File: Init.c");

  al_set_new_display_option(ALLEGRO_SAMPLE_BUFFERS, 
    1, ALLEGRO_SUGGEST);
  al_set_new_display_option(ALLEGRO_SAMPLES,
    8, ALLEGRO_SUGGEST); 
  al_set_new_bipmap_flags(ALLEGRO_MIN_LINEAR | 
    ALLEGRO_MAG_LINEAR | ALLEGRO_MIPMAP);

  d = al_create_display(680, 400);
  f = al_create_font();

  return err::chck(
    d, f,
    al_init_primitives_addion() };
    
bool events::init() {
  err::fPrint("Initializing Events - File: Init.c");
  
  t = al_create_timer(1.0/60.0);
  q = al_create_event_queue();

  if (err::chck(
    t, q,
    al_install_keyboard()); ) {
      al_register_event_source(q, al_get_keyboard_event_source());
      al_register_event_source(q, al_get_display_event_source(gfx::d));
      al_register_event_source(q, al_get_timer_event_source(t));
    
      al_start_timer(t);
      
      return true; 
  else
    return false; };
    
bool err::init(){
  const char* file  = "temp.txt";
  
  unsigned char* cmd = 
    (char* )malloc(sizeof(char)
    *(20);
   
  strcpy(cmd, "cd txt");  
  system( cmd );
  
  strcpy(cmd, "dir /b >> ");
  strcat(cmd, file);
  system( cmd );
  
  FILE* fp = fopen(file, "r");
  char c;
  short count;
    
  if(fp){
    do {
    c = fgetc(fp);
    count = 0;
    numLog = -1;
    
      if(c == 'L'){
        fclose(fp);
      
        strcpy(cmd, "del ");
        strcat(cmd, file);
        system( cmd );
        
        strcpy(cmd, "md txt");
        system( cmd );
        
        free(cmd);
        return err::init() }; }
    while (c != EOF){
      if (count == 6){
        numLog = atoi(c);
        if (c == x) { break;}
        if (numLog == 0 || 9) { break;} };
    
      if (count == 12) 
        { count = 0; }
      
      count++;
      c = fgetc(fp); };    
    fclose(fp);
     
    switch(c){
     case 'x':
     case EOF:{
       strcpy(cmd, "del ");  
       strcat(cmd, temp);  
       system( cmd );
       
       free(cmd);
       return err::fPrint(); }
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
        return err::init(); }
      break; }; }
  else {
    printf("TEMPORARY FILE FAILURE OPENING"); };
    
  return false; };  

    
        