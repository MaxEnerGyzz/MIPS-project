BIN = main
OBJECTS_LOCATION = ./objects/
OBJECTS = ./objects/*.o
CC = gcc
RM = rm -f
CFLAGS = -Wall -ansi -pedantic -std='c99' -lm

all : 
	$(CC) $(OBJECTS) -o $(BIN) -Wall -pedantic -lm

fonction.o : fonction.c fonction.h
	$(CC) -g -c fonction.c -o $(OBJECTS_LOCATION)fonction.o $(CFLAGS)

registre.o : registre.c registre.h
	$(CC) -g -c registre.c -o $(OBJECTS_LOCATION)registre.o $(CFLAGS)

fonction_str.o : fonction_str.c fonction_str.h
	$(CC) -g -c fonction_str.c -o $(OBJECTS_LOCATION)fonction_str.o $(CFLAGS)

main.o : main.c fonction.h fonction_str.h registre.h
	$(CC) -g -c main.c -o $(OBJECTS_LOCATION)main.o $(CFLAGS)

clean :
	$(RM) $(OBJECTS) $(BIN)
