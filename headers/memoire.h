#ifndef __MEMOIRE_H__
#define __MEMOIRE_H__

#include <stdlib.h>
#include <stdio.h>

#include "registre.h"
#include "fonction.h"
#include "fonction_str.h"

#define TAILLE_MEM_INSTRUCTIONS 500 /* 500 * 4 octets = tableau de 2ko */
#define TAILLE_MEM_VAR 100

void initialiserMemoire(long* memoire);
void modifierElmtMem(long* memoire, long valeur, int position);
long recupererElmtMem(long* memoire, int position);
void remplirMemProg(long* memoire, liste_instructions* tab_liste_instructions_val);

#endif