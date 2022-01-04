#ifndef FONCTION_STR
#define FONCTION_STR

#include <stdlib.h>
#include <stdio.h>
#include <math.h>


void myStrcpy(char *str, char* str2); /* str = chaine à coller, str2 = chaine à copier */
int myStrlen(const char *str); /* Renvoit la taille de la chaine */
void retournerMot(char* mot); /* Retourne une chaine de caractères */
char* mettreEnMajuscule(char* str); /* Transforme les lettres d'une chaine de caractères en majuscule */
int comparerChaine(char *chaine1, char* chaine2); /* Renvoit 1 si les deux chaines sont identiques, 0 sinon */
void copierChaineGaucheDroite(const char* tab_tmp, char *tab_bin, int posG, int posD); /* Copie une chaine à une position donnée dans un tableau */
void copierChaineDroite(const char* tab_tmp, char *tab_bin); /* Copie une chaine en commencant par la droite */

int valeurDecimale(char* str); /* Transforme un chiffre mis dans un tableau de char en entier */
void intToStr(int nombre, char *chaine); /* Transforme un entier en tableau de caractères */
void decToBin(char *strDec, char* strBin); /* Transforme un décimal en binaire */
void binToHex(char *strBin, char *strHexa); /* Transforme un binaire en héxadécimal */
int binToDec(char *strBin); /* Transforme un binaire en décimal */
int estUnInt(char *str); /* Retourne 1 si tous les membres du tableau sont des nombres*/

int myPower2(int value); /* Renvoie la puissance de 2 de value */

#endif
