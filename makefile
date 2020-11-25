CC = gcc
FLAGS0 = -O0
FLAGS2 = -O2
FLAGS3 = -O3

OBJECTS = heatExp.c tools.c

BIN1 = SOLVEHEAT
BIN2 = solvedebug

all: $(BIN1)

SOLVEHEAT: $(OBJECTS)
	$(CC) -o $(BIN1) $(FLAGS3) $(OBJECTS)
	
solvedebug: $(OBJECTS)
	$(CC) -g -o $(BIN2) $(FLAGS0) $(OBJECTS)


