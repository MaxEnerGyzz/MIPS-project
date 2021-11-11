#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void lireInstruction(char* fichierInstr, char* fichierHex);
void instructionToHex(FILE* ficInstr, FILE* ficHex, char* instruction, char* tab_instr, char* tab_bin, char* tab_hex, char *tab_tmp);
char* mettreEnMajuscule(char* str);
int comparerChaine(char *chaine1, char* chaine2);
int myStrlen(const char *str);
int valeurDecimale(char* str);
void retournerMot(char mot[], char res[]);
void decToBin(char *strDec, char* strBin);
void binToHex(char *strBin, char *strHexa);
void copierChaine(const char* tab_tmp, char *tab_bin, int pos);
