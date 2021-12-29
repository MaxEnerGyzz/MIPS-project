#ifndef __REGISTRE_H__
#define __REGISTRE_H__

#define NB_REGISTRES 34

typedef struct registre registre;
struct registre {
    char *nom; /* NOM du registre */
    int id; /* Identifiant associé au registre */
    char tab_bin[33]; /* Valeur du registre */
    int reg_protege; /* Indique si le registre est protégé en écriture: 1 si protégé, 0 sinon */
};
extern const struct registre tab_registre[NB_REGISTRES + 1];

void remplir_struc_registre(); /* Remplit la structure contenant les différentes informations sur les registres */
void verifier_structure_registre(); /* Affiche les informations actuelles des registres (nom, valeur, protégé ou non) */

int estUnRegistre(char* operande); /* Retourne -1 si l'operande n'est pas un registre. Retourne la valeur correspondante du registre si c'en est un */
int estUnRegistreProtege(char* operande); /* Retourne 1 si l'operande est un registre protege. Retourne 0 sinon */

#endif