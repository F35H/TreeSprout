LINKER = -LG:\Dev\CPP\TreeSprout\lib -lallegro.dll -lallegro_font.dll -lallegro_image.dll -lallegro_primitives.dll -lallegro_acodec.dll -lallegro_audio.dll
INCLUDE = -IG:\Dev\CPP\TreeSprout\include -IG:\Dev\CPP\TreeSprout\heads
BINARY = -BG:\Dev\CPP\TreeSprout\bin
CPP = main.c src/init.c src/close.c src/err.c src/lp.c
OUT = game.exe

BFRCMDS = cls
AFTRCMDS = move $(OUT) bin & Yes

run:
	$(BFRCMDS)
	start run.bat

compile:
	$(BFRCMDS)
	gcc -o $(OUT) $(CPP) $(INCLUDE) $(LINKER) $(BINARY) -O3 -w -pipe


warn:
	$(BFRCMDS)
	gcc -o $(OUT) $(CPP) $(INCLUDE) $(LINKER) $(BINARY) -O3 -Wall -pipe
	$(AFTRCMDS)

dircheck:
	$(BFRCMDS)
	tree /b
	gcc -v -o $(OUT) $(CPP) $(INCLUDE) $(LINKER) $(BINARY) -O3 -pipe
	$(AFTRCMDS)

headwarn:
	$(BFRCMDS)
	gcc -o $(OUT) $(CPP) $(INCLUDE) $(LINKER) $(BINARY) -O3 -Wsystem-headers -pipe
	$(AFTRCMDS)
 	
gdb:
	$(BFRCMDS)
	gcc -g -o $(OUT) $(CPP) $(INCLUDE) $(LINKER) $(BINARY) -O3 -pipe
	gdb
	file $(OUT)

noop:
	$(BFRCMDS)
	gcc -o $(OUT) $(CPP) $(INCLUDE) $(LINKER) $(BINARY) -Wall -pipe
	$(AFTRCMDS)