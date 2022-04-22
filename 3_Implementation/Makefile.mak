FILES =Main.c
TARGET=Project4.exe
OBJS  =Main.o

MINGW =$(MINGW_PATH)
LIBS  = -L"$(MINGW)\lib" -mwindows -lkernel32 -luser32 -lgdi32
CFLAGS= -I"$(MINGW)\include"
CC    =gcc.exe

all: build

build: compile
	@$(CC) -Wall -s -o $(TARGET) $(OBJS) $(LIBS)

compile: $(FILES)
	@$(CC) -Wall -s -c $(FILES) $(CFLAGS)
