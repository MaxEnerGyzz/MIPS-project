#ifndef __REGISTRE_H__
#define __REGISTRE_H__

#include <stdlib.h>
#include <stdio.h>

#include "fonction_str.h"

#define NB_REGISTRES 34


typedef struct registre {
    char *nom; /* NOM du registre */
    int id; /* Identifiant associé au registre */
    char tab_bin[33]; /* Valeur du registre */
    int reg_protege; /* Indique si le registre est protégé en écriture: 1 si protégé, 0 sinon */
}registre;



void remplir_struc_registre(registre* tab_registre); /* Remplit la structure contenant les différentes informations sur les registres */
void verifier_structure_registre(registre* tab_registre); /* Affiche les informations actuelles des registres (nom, valeur, protégé ou non) */

int estUnRegistre(char* operande, registre* tab_registre); /* Retourne -1 si l'operande n'est pas un registre. Retourne la valeur correspondante du registre si c'en est un */
int estUnRegistreProtege(char* operande, registre* tab_registre); /* Retourne 1 si l'operande est un registre protege. Retourne 0 sinon */

void modifieRegistreParValeur(int valeur, char* registre_nom, registre *tab_registre); /* Modifie un registre par une valeur entree en entier */
void resetRegistre(char* registre_nom, registre *tab_registre); /* Remet le registre à 0 */

void afficher_registres(registre* tab_registre); /* Affiche les registres en hexadecimal */
void ecrire_registres_fichier(registre* tab_registre, char* nom_fichier); /* Ecrit les registres en hexadecimal dans un fichier */

#endif
