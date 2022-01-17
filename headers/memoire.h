#ifndef __MEMOIRE_H__
#define __MEMOIRE_H__

#include <stdlib.h>
#include <stdio.h>

#include "registre.h"
#include "fonction.h"
#include "fonction_str.h"

#define TAILLE_MEMOIRE_INSTR 500 /* 500 * 4 octets = Tableau de 2Ko*/
#define TAILLE_MEMOIRE 2500 /* 2500 * 4 octets = Tableau de 10Ko donc mémoire de 12Ko*/

long* initialiserMemoire(); /* Initialise la memoire en mettant tous les blocs à 0 */
long* initialiserMemoire_instrs(); /* Initialise la memoire contenant les instructions en mettant tous les blocs à 0 */
void remplirMemProg(long* memoire_instr, liste_instructions* tab_liste_instructions_val, int nb_instr); /* Remplis la mémoire avec les instructions d'entrée (mode non-interactif)*/
void remplirMemProg_une_instruction(long* memoire_instr, char* instruction_hexa, int nb_instr_actuelle); /* Remplis la mémoire avec une instruction entree (mode pas-a-pas et interactif)*/
void modifierElmtMem(long* memoire, long valeur, int position); /* Modifie la memoire selon une valeur et a une position donnee */
long recupererElmtMem(long* memoire, int position); /* Recupere la valeur associe a une position de la memoire */

#endif
