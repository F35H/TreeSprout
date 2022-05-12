LINKER = -LG:\Dev\CPP\TreeSprout\lib -lcsfml-window -lcsfml-graphics -lpthread -std=c11 -lcsfml-system
INCLUDE = -IG:\Dev\CPP\TreeSprout\include -IG:\Dev\CPP\TreeSprout\heads
BINARY = -BG:\Dev\CPP\TreeSprout\bin

ifdef OS
	CPP = main.c src/init.c src/winErr.c src/lp.c src/sorts/bubbSorts.c src/sorts/treeSorts.c
else
	CPP = main.c src/init.c src/uniErr.c src/lp.c  
	
endif

OUT = bin/game.exe

BFRCMDS = cls
AFTRCMDS = move /y $(OUT) bin

run:
	$(BFRCMDS)
	cd bin & start game.exe

compile:
	$(BFRCMDS)
	gcc -o $(OUT) $(CPP) $(INCLUDE) $(LINKER) $(BINARY) -O3 -w -pipe

warn:
	$(BFRCMDS)
	gcc -o $(OUT) $(CPP) $(INCLUDE) $(LINKER) $(BINARY) -O3 -Wall -pipe

dircheck:
	$(BFRCMDS)
	tree /b
	gcc -v -o $(OUT) $(CPP) $(INCLUDE) $(LINKER) $(BINARY) -O3 -pipe

headwarn:
	$(BFRCMDS)
	gcc -o $(OUT) $(CPP) $(INCLUDE) $(LINKER) $(BINARY) -O3 -Wsystem-headers -pipe
 	
gdb:
	$(BFRCMDS)
	gcc -g -o $(OUT) $(CPP) $(INCLUDE) $(LINKER) $(BINARY) -O3 -pipe
	cd bin & gdb game.exe

noop:
	$(BFRCMDS)
	gcc -o $(OUT) $(CPP) $(INCLUDE) $(LINKER) $(BINARY) -Wall -pipe

precomp: 
	$(BFRCMDS)
	gcc -o heads/libs.h.gch heads/libs.h $(INCLUDE)