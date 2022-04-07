#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdarg.h>
#include <time.h>

#include <SFML/Window.h>
#include <SFML/Graphics.h>

//General
bool genInit();
bool genLp();
bool genClose(); 
  
//Graphics
sfRenderWindow* wind;

bool gfxInit();
bool gfxLp(); 

//Evemts
  
bool evntInit();
bool evntLp();

//Error Handling
short numLog;

bool errInit(); 
bool  errChck(bool itm,...);
bool  errFPrint(const char* str);
  