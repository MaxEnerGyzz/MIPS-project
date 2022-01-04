#ifndef __INSTRUCTIONS_H__
#define __INSTRUCTIONS_H__

#include <stdlib.h>
#include <stdio.h>

#include "registre.h"
#include "fonction.h"
#include "fonction_str.h"

void mode_non_interactif(liste_instructions* tab_liste_instructions_val, registre* tab_registre, int nb_instructions_val_entrees);

void instruction_ADD(int rd, int rs, int rt);
void instruction_ADDI(int rd, int rs, int imm);

#endif