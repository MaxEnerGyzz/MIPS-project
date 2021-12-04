#ifndef MON_H
#define MON_H 


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

typedef struct liste_instructions liste_instructions;
struct liste_instructions {
    char *instr; /* NOM de l'instruction */
    int pos_instr_struct; /* Position de l'instruction dans le tableau de structures d'instruction */
    int nb_arg; /* Nombre d'arguments de l'instruction */
    int* arg; /* Arguments de l'instruction */
    char tab_bin[33]; /* Tableau en binaire associé */
};
struct liste_instructions tab_liste_instructions[50];

void myStrcpy(char *str, char* str2); /* str = chaine à coller, str2 = chaine à copier */
int myStrlen(const char *str);
void retournerMot(char* mot);
char* mettreEnMajuscule(char* str);
int comparerChaine(char *chaine1, char* chaine2);
void copierChaine(const char* tab_tmp, char *tab_bin, int pos);
void copierChaineGauche(const char* tab_tmp, char *tab_bin, int pos);

int valeurDecimale(char* str); /* Transforme un chiffre mis dans un tableau de char en entier */
void decToBin(char *strDec, char* strBin); /* Transforme un décimal en binaire */
void binToHex(char *strBin, char *strHexa); /* Transforme un binaire en héxadécimal */

void lireInstruction(char* fichierInstr, char* fichierHex);
int recupereInstr(FILE* ficInstr, char* tmp);

void remplir_struct(); /* Remplit le tableau de structure des codes d'instructions */
int recherche_instr_dans_structure(char* nom_instr); /* Renvoit la position dans le tableau de structures de l'instruction entrée */
void remplir_liste_instructions(char* instruction, int instruction_actuelle); /* Remplit le tableau de structures avec les instructions mises en entrée du programme */
void verifier_structure_instruction(); /* Affiche les instructions (d'entrée) stockées en mémoire dans le tableau de structure */

int compte_nb_instructions(char* fichierInstr); /* Compte le nombre d'instructions dans le fichier d'entrée --> je crois qu'elle sert à rien pour l'instant*/

#endif

