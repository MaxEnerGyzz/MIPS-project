BIN = emul-mips

OBJECTS = fonction.o fonction_str.o registre.o main.o instructions.o memoire.o
OBJECTS_LOCATION = ./objects/
OBJECTS_O = ./objects/*.o

SOURCE_LOCATION = ./source/

CC = gcc
RM = rm -f
CFLAGS = -Wall -ansi -pedantic -std='c99'

all : $(OBJECTS)
	$(CC) $(OBJECTS_O) -o $(BIN) -Wall -pedantic 

fonction_str.o : source/fonction_str.c headers/fonction_str.h
	$(CC) -g -c $(SOURCE_LOCATION)fonction_str.c -o $(OBJECTS_LOCATION)fonction_str.o $(CFLAGS)

fonction.o : source/fonction.c headers/fonction.h
	$(CC) -g -c $(SOURCE_LOCATION)fonction.c -o $(OBJECTS_LOCATION)fonction.o $(CFLAGS)

registre.o : source/registre.c headers/registre.h
	$(CC) -g -c $(SOURCE_LOCATION)registre.c -o $(OBJECTS_LOCATION)registre.o $(CFLAGS)
	
memoire.o : source/memoire.c headers/memoire.h
	$(CC) -g -c $(SOURCE_LOCATION)memoire.c -o $(OBJECTS_LOCATION)memoire.o $(CFLAGS)

instructions.o: source/instructions.c headers/instructions.h
	$(CC) -g -c $(SOURCE_LOCATION)instructions.c -o $(OBJECTS_LOCATION)instructions.o $(CFLAGS)


main.o : source/main.c headers/fonction.h headers/fonction_str.h headers/registre.h headers/memoire.h headers/instructions.h
	$(CC) -g -c $(SOURCE_LOCATION)main.c -o $(OBJECTS_LOCATION)main.o $(CFLAGS)

clean :
	$(RM) $(OBJECTS) $(BIN)
