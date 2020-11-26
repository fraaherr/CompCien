FLAGS0 = -O0
FLAGS2 = -O2
FLAGS3 = -O3

OBJECTS = heatExp.c tools.c

BIN1 = heat
BIN2 = debug

all: $(BIN1)

heat: $(OBJECTS)
	gcc -o $(BIN1) $(FLAGS3) $(OBJECTS)
	
debug: $(OBJECTS)
	gcc -g -o $(BIN2) $(FLAGS0) $(OBJECTS)


