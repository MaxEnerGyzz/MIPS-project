#ifndef __MEMOIRE_H__
#define __MEMOIRE_H__

#include <stdlib.h>
#include <stdio.h>

#include "registre.h"
#include "fonction.h"
#include "fonction_str.h"

#define TAILLE_MEMOIRE_INSTR 500 /* 500 * 1 octets */
#define TAILLE_MEMOIRE 2500 /* 2500 * 1 octets */

unsigned char* initialiserMemoire(); /* Initialise la memoire en mettant tous les blocs à 0 */
unsigned char* initialiserMemoire_instr(); /* Initialise la memoire contenant les instructions en mettant tous les blocs à 0 */
void remplirMemProg(unsigned char* memoire_instr, char* instruction_hexa, int nb_instr_actuelle); /* Remplis la mémoire avec une instruction entree (mode pas-a-pas et interactif)*/
#endif
