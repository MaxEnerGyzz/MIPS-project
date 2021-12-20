#ifndef __MON_H__
#define __MON_H__ 

#include <stdlib.h>
#include <stdio.h>
#include <math.h>


typedef struct instruction instruction;
struct instruction {
    char *instr; /* NOM de l'instruction */
    int nb_arg; /* Nombre d'arguments */
    int* pos_arg; /* tableau qui indique le numero des bits de debut et de fin des arguments */
    char tab_bin[33]; /* Tableau en binaire associé */
    int *reg; /* Tableau de la taille du nombre d'arguments. Le tab est à 1 si c'est un registre, 0 si c'est un immediate*/
};
struct instruction tab_instruction[26];

typedef struct liste_instructions liste_instructions;
struct liste_instructions {
    char *instr; /* NOM de l'instruction */
    int pos_instr_struct; /* Position de l'instruction dans le tableau de structures d'instruction */
    int nb_arg; /* Nombre d'arguments de l'instruction */
    int* arg; /* Arguments de l'instruction */
    char tab_bin[33]; /* Tableau en binaire associé */
    char tab_hexa[9]; /* Tableau en héxadécimal associé */
};
struct liste_instructions tab_liste_instructions[50];

void lireInstruction(char* fichierInstr, char* fichierResult);
int recupereInstr(FILE* ficInstr, char* tmp);
void ecrit_hexa(char* fichier_in, char* fichier_sortie); /* */

void remplir_struct(); /* Remplit le tableau de structure des codes d'instructions */
int recherche_instr_dans_structure(char* nom_instr); /* Renvoit la position dans le tableau de structures de l'instruction entrée */
void remplir_liste_instructions(char* instruction, int instruction_actuelle); /* Remplit le tableau de structures avec les instructions mises en entrée du programme */
void verifier_structure_instruction(char* fic_instr); /* Affiche les instructions (d'entrée) stockées en mémoire dans le tableau de structure */

int compte_nb_instructions(char* fichierInstr); /* Compte le nombre d'instructions dans le fichier d'entrée --> je crois qu'elle sert à rien pour l'instant*/
int compte_nb_lignes(char* fichierInstr); /* Compte le nombre de lignes dans le fichier d'entrée */

int estUnRegistre(char* operande); /* Retourne -1 si l'operande n'est pas un registre. Retourne la valeur correspondante du registre si c'en est un */

#endif

