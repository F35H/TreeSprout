LINKER = -LG:\Dev\CPP\TreeSprout\lib -lallegro.dll -lallegro_font.dll -lallegro_image.dll -lallegro_primitives.dll -lallegro_acodec.dll -lallegro_audio.dll
INCLUDE = -IG:\Dev\CPP\TreeSprout\include -IG:\Dev\CPP\TreeSprout\include
BINARY = -BG:\Dev\CPP\TreeSprout\bin
CPP = main.c
OUT = game.exe

run:
	$(OUT)

compile:
	gcc -o $(OUT) $(CPP) $(INCLUDE) $(LINKER) $(BINARY) -O3 -w -pipe

warn: 
	gcc -o $(OUT) $(CPP) $(INCLUDE) $(LINKER) $(BINARY) -O3 -Wall -pipe

dircheck:
	tree
	gcc -v -o $(OUT) $(CPP) $(INCLUDE) $(LINKER) $(BINARY) -O3 -pipe

headwarn:
	gcc -o $(OUT) $(CPP) $(INCLUDE) $(LINKER) $(BINARY) -O3 -Wsystem-headers -pipe
 	
gdb:
	gcc -g -o $(OUT) $(CPP) $(INCLUDE) $(LINKER) $(BINARY) -O3 -pipe
	start gdb

noop:
	gcc -o $(OUT) $(CPP) $(INCLUDE) $(LINKER) $(BINARY) -Wall -pipe