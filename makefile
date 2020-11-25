CC = gcc
FLAGS0 = -O0
FLAGS2 = -O2
FLAGS3 = -O3

OBJECTS = heatExp.c tools.c

BIN1 = heat
BIN2 = debug

all: $(BIN1)

heat: $(OBJECTS)
	$(CC) -o $(BIN1) $(FLAGS3) $(OBJECTS)
	
debug: $(OBJECTS)
	$(CC) -g -o $(BIN2) $(FLAGS0) $(OBJECTS)


