#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void instructToHex(char* ficInstr, char* ficBin);
char* mettreEnMajuscule(char* str);
int comparerChaine(char *chaine1, char* chaine2);
int myStrlen(const char *str);
int valeurDecimale(char* str);
void retournerMot(char mot[], char res[]);
void decToBin(char *strDec, char* strBin);
void binToHex(char *strBin, char *strHexa);
void copierChaine(const char* tab_tmp, char *tab_bin, int pos);
