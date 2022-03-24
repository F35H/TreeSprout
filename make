LINKER = -LG:\Dev\CPP\TreeSprout\lib -lallegro.dll -lallegro_font.dll -lallegro_image.dll -lallegro_primitives.dll -lallegro_acodec.dll -lallegro_audio.dll
INCLUDE = -IG:\Dev\CPP\TreeSprout\include -IG:\Dev\CPP\TreeSprout\include
CPP = hello.c
OUT = hello.exe

run:
	$(OUT)

compile:
	gcc -o $(OUT) $(CPP) $(INCLUDE) $(LINKER) -O3 -w

warn: 
	gcc -o $(OUT) $(CPP) $(INCLUDE) $(LINKER) -O3 -Wall

dircheck:
	tree
	gcc -v -o $(OUT) $(CPP) $(INCLUDE) $(LINKER) -O3

headwarn:
	gcc -o $(OUT) $(CPP) $(INCLUDE) $(LINKER) -O3 -Wsystem-headers
 	
gdb:
	gcc -o $(OUT) $(CPP) $(INCLUDE) $(LINKER) -O3
	start gdb

noop:
	gcc -o $(OUT) $(CPP) $(INCLUDE) $(LINKER) -Wall 