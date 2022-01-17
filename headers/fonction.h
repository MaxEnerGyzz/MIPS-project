#ifndef __MON_H__
#define __MON_H__

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "registre.h"
#include "fonction_str.h"

#define NB_INSTRUCTIONS_MIPS 26
#define NB_INSTRUCTIONS_MAX 500


typedef struct liste_instructions {
    char *instr; /* NOM de l'instruction */
    int pos_instr_struct; /* Position de l'instruction dans le tableau de structures d'instruction */
    int nb_arg; /* Nombre d'arguments de l'instruction */
    int* arg; /* Arguments de l'instruction */
    char tab_bin[33]; /* Tableau en binaire associé */
    char tab_hexa[9]; /* Tableau en héxadécimal associé */
    int instruction_valide; /* Indique si l'instruction est valide en fonction des arguments registre utilisés...*/
}liste_instructions;


typedef struct liste_instructions_valide {
    char *instr; /* NOM de l'instruction */
    int pos_instr_struct; /* Position de l'instruction dans le tableau de structures d'instruction */
    int nb_arg; /* Nombre d'arguments de l'instruction */
    int* arg; /* Arguments de l'instruction */
    char tab_bin[33]; /* Tableau en binaire associé */
    char tab_hexa[9]; /* Tableau en héxadécimal associé */
    int instruction_valide; /* Indique si l'instruction est valide en fonction des arguments registre utilisés...*/
}liste_instructions_valide;


typedef struct instructions {
    char *instr; /* NOM de l'instruction */
    int nb_arg; /* Nombre d'arguments */
    int* pos_arg; /* tableau qui indique le numero des bits de debut et de fin des arguments */
    char tab_bin[33]; /* Tableau en binaire associé */
    int *reg; /* Tableau de la taille du nombre d'arguments. Le tab est à 1 si c'est un registre, 0 si c'est un immediate*/
    int *reg_protege; /* Tableau des arguments où il est possible d'écrire dans un registre: 1 si il est possible d'écrire dans un registre, 0 sinon */
}instructions;


void initialiserEmulateur(int mode, char* fichierInstr, int nb_instructions_entree, registre* tab_registre, instructions* tab_instruction, liste_instructions* tab_liste_instructions, liste_instructions* tab_liste_instructions_val, long* memoire_instr); /* Initialise le simulateur
en initialisant les valeurs des structures d'instructions et de registre. Execute egalement lireInstruction() qui permet d'enregistrer le fichier d'entree dans une structure. */

void lireInstruction(int mode, char* fichierInstr, liste_instructions* tab_liste_instructions, instructions* tab_instruction, registre* tab_registre, long* memoire_instr);

int ecrireInstructionInteractif(liste_instructions* tab_liste_instructions, instructions* tab_instruction, registre* tab_registre, long* memoire_instr);


int recupereInstr(FILE* ficInstr, char* tmp);
void ecrit_instr_hexa(int nb_instructions, char* fichier_sortie, liste_instructions* tab_liste_instructions); /* ecrit l'integralite des fonctions traduite en hexadecimal dans le fichier de sortie */

void remplir_struct_instruction(instructions* tab_instruction); /* Remplit le tableau de structure des codes d'instructions */
int recherche_instr_dans_structure(char* nom_instr, instructions* tab_instruction); /* Renvoit la position dans le tableau de structures de l'instruction entrée */
void remplir_liste_instructions(char* instruction, int instruction_actuelle, liste_instructions* tab_liste_instructions, instructions* tab_instruction, registre* tab_registre); /* Remplit le tableau de structures avec les instructions mises en entrée du programme */
void verifier_structure_instruction(int nb_instructions, liste_instructions* tab_liste_instructions); /* Affiche les instructions (d'entrée) stockées en mémoire dans le tableau de structure */

void remplir_liste_instructions_valide(liste_instructions* tab_liste_instructions, liste_instructions* tab_liste_instructions_val, int nb_instructions_entree); /* Remplit le tableau de structures des instructions valides */

int compte_nb_lignes(char* fichierInstr); /* Compte le nombre de lignes dans le fichier d'entrée */
int compte_nb_inst(char* fichierInstr);  /* Compte le nombre d'instructions dans le fichier d'entrée*/
int compte_nb_instr_val(int nb_instr, liste_instructions* tab_liste_instructions); /* Compte le nombre d'instructions valides dans la structure */

int choix_mode(char* argv_1, char* argv_2, int arg_c); /* Renvoie 1 si le mode interactif pas a pas selectionne, 0 si c'est le mode non interactif, 2 si c'est le mode pas a pas */

void testMemoire(unsigned char *memoire_instr, unsigned char* memoire);

#endif
