#ifndef __INSTRUCTIONS_H__
#define __INSTRUCTIONS_H__

#include <stdlib.h>
#include <stdio.h>

#include "registre.h"
#include "fonction.h"
#include "fonction_str.h"

void mode_non_interactif(liste_instructions* tab_liste_instructions_val, registre* tab_registre, int nb_instructions_val_entrees, long* memoire);
int execute_instruction(liste_instructions* tab_liste_instructions_val, registre* tab_registre, int instruction_actuelle, int i, long* memoire); /* Trouve et execute l'instruction demandee | Renvoit 1 si l'instruction modifie le PC, 0 sinon */
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
void instruction_SW(int rt, int offset, int base, registre* tab_registre, long* memoire);
void instruction_SYSCALL();
void instruction_XOR(int rd, int rs, int rt, registre* tab_registre);

#endif
