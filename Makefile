MYNAME=GRENIER_JULIEN
SRCDOC=README.md

# testfiles are in TESTDIR and IGNORE = list of files to ignore when taring
TESTDIR = testfiles/
IGNORE = old_generate.c.old

BIN = emul-mips
PREFIX=MIPS3

OBJECTS = fonction.o fonction_str.o registre.o main.o instructions.o memoire.o
OBJECTS_LOCATION = ./objects/
OBJECTS_O = ./objects/*.o

SOURCE_LOCATION = ./source/

CC = gcc
RM = rm -f
CFLAGS = -Wall -ansi -pedantic -std='c99' -lm

C_FILES = $(wildcard *.c)
OBJ_FILES = $(C_FILES:.c=.o)

all : $(OBJECTS)
	$(CC) $(OBJECTS_O) -o $(BIN) -Wall -pedantic -lm

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

# a useful command to generate a pdf from a .md documentation file
doc : $(SRCDOC)
		pandoc -f markdown -t pdf  $(SRCDOC) -o $(basename $(SRCDOC)).pdf

		# A useful command to deliver your project while keeping me sane
tar: clean
		dir=$$(basename $$PWD) && echo "compressing $(dir)" && cd .. && \
		tar cvfz "$(PREFIX)-$(MYNAME).tgz" \
		--transform="s,^$$dir,$(PREFIX)-$(MYNAME)," \
		--exclude="$(IGNORE)" "$$dir" --verbose --show-transformed-names
