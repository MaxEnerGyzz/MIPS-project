#ifndef __MON_H__
#define __MON_H__ 

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define FICHIER_TEST "./in/instr.txt"
#define FICHIER_OUT "./out/result.txt"

typedef struct instruction instruction;
struct instruction {
    char *instr; /* NOM de l'instruction */
    int nb_arg; /* Nombre d'arguments */
    int* pos_arg; /* tableau qui indique le numero des bits de debut et de fin des arguments */
    char tab_bin[33]; /* Tableau en binaire associé */
};
struct instruction tab_instruction[26];

typedef struct liste_instructions liste_instructions;
struct liste_instructions {
    char *instr; /* NOM de l'instruction */
    int pos_instr_struct; /* Position de l'instruction dans le tableau de structures d'instruction */
    int nb_arg; /* Nombre d'arguments de l'instruction */
    int* arg; /* Arguments de l'instruction */
    char* arg_en_str; /* Arguments de l'instruction en tableau de caractères (plus facile à manier) */
    char tab_bin[33]; /* Tableau en binaire associé */
};
struct liste_instructions tab_liste_instructions[50];

void myStrcpy(char *str, char* str2); /* str = chaine à coller, str2 = chaine à copier */
int myStrlen(const char *str); /* Renvoit la taille de la chaine */
void retournerMot(char* mot); /* Retourne une chaine de caractères */
char* mettreEnMajuscule(char* str); /* Transforme les lettres d'une chaine de caractères en majuscule */
int comparerChaine(char *chaine1, char* chaine2); /* Renvoit 1 si les deux chaines sont identiques, 0 sinon */
void copierChaine(const char* tab_tmp, char *tab_bin, int pos); /* Copie une chaine en partant de la droite */
void copierChaineGauche(const char* tab_tmp, char *tab_bin, int pos); /* Copie une chaine en partant de la gauche */
void copierChaineGaucheDroite(const char* tab_tmp, char *tab_bin, int posG, int posD); /* Copie une chaine à une position donnée dans un tableau */

int valeurDecimale(char* str); /* Transforme un chiffre mis dans un tableau de char en entier */
void intToStr(int nombre, char *chaine); /* Transforme un entier en tableau de caractères */
void decToBin(char *strDec, char* strBin); /* Transforme un décimal en binaire */
void binToHex(char *strBin, char *strHexa); /* Transforme un binaire en héxadécimal */

void lireInstruction(char* fichierInstr, char* fichierHex);
int recupereInstr(FILE* ficInstr, char* tmp);

void remplir_struct(); /* Remplit le tableau de structure des codes d'instructions */
int recherche_instr_dans_structure(char* nom_instr); /* Renvoit la position dans le tableau de structures de l'instruction entrée */
void remplir_liste_instructions(char* instruction, int instruction_actuelle); /* Remplit le tableau de structures avec les instructions mises en entrée du programme */
void verifier_structure_instruction(); /* Affiche les instructions (d'entrée) stockées en mémoire dans le tableau de structure */

int compte_nb_instructions(char* fichierInstr); /* Compte le nombre d'instructions dans le fichier d'entrée --> je crois qu'elle sert à rien pour l'instant*/
int compte_nb_lignes(char* fichierInstr); /* Compte le nombre de lignes dans le fichier d'entrée */
void instr_to_hexa(int nb_instructions);
#endif

