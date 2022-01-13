#ifndef __INSTRUCTIONS_H__
#define __INSTRUCTIONS_H__

#include <stdlib.h>
#include <stdio.h>

#include "registre.h"
#include "fonction.h"
#include "fonction_str.h"

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

void mode_non_interactif(liste_instructions* tab_liste_instructions_val, registre* tab_registre, int nb_instructions_val_entrees);
int execute_instruction(liste_instructions* tab_liste_instructions_val, registre* tab_registre, int instruction_actuelle, int i); /* Trouve et execute l'instruction demandee | Renvoit 1 si l'instruction modifie le PC, 0 sinon */
void instruction_ADD(int rd, int rs, int rt, registre* tab_registre);
void instruction_ADDI(int rd, int rs, int imm, registre* tab_registre);
void instruction_AND(int rd, int rs, int rt, registre* tab_registre);
void instruction_BEQ(int rs, int rt, int offset);
void instruction_BGTZ(int rs, int offset);
void instruction_BLEZ(int rs, int offset);
void instruction_BNE(int rs, int rt, int offset);
void instruction_DIV(int rs, int rt, registre* tab_registre);
void instruction_J(int target);
void instruction_JAL(int target);
void instruction_JR(int rs);
void instruction_LUI(int rd, int imm, registre* tab_registre);
void instruction_LW(int rt, int offset, int base);
void instruction_MFHI(int rd, registre* tab_registre);
void instruction_MFLO(int rd, registre* tab_registre);
void instruction_MULT(int rs, int rt, registre* tab_registre);
void instruction_NOP();
void instruction_OR(int rd, int rs, int rt, registre* tab_registre);
void instruction_ROTR(int rd, int rs, int rt, registre* tab_registre); // A realiser
void instruction_SLL(int rd, int rt, int sa, registre* tab_registre);
void instruction_SLT(int rd, int rs, int rt);
void instruction_SRL(int rd, int rt, int sa, registre* tab_registre);
void instruction_SUB(int rd, int rs, int rt, registre* tab_registre);
void instruction_SW(int rt, int offset, int base);
void instruction_SYSCALL();
void instruction_XOR(int rd, int rs, int rt, registre* tab_registre);

#endif
