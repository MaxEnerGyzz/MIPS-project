#include <stdlib.h>
#include <stdio.h>
#include <math.h>


typedef struct instruction instruction;
struct instruction {
    char *instr; /* NOM de l'instruction */
    int nb_arg; /* Nombre d'arguments */
    int* pos_arg; /* tableau qui indique le numero des bits de debut et de fin des arguments */
    char tab_bin[33];
};

struct instruction tab_instruction[26];

void myStrcpy(char *str, char* str2);
void lireInstruction(char* fichierInstr, char* fichierHex);
char* mettreEnMajuscule(char* str);
int comparerChaine(char *chaine1, char* chaine2);
int myStrlen(const char *str);
int valeurDecimale(char* str);
void retournerMot(char* mot);
void decToBin(char *strDec, char* strBin);
void binToHex(char *strBin, char *strHexa);
void copierChaine(const char* tab_tmp, char *tab_bin, int pos);
void remplir_struct();
int recupereInstr(FILE* ficInstr, char* tmp);
