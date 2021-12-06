//#include "fonction.h"

#include <stdio.h>
#include <stdlib.h>

#define FICHIER_TEST "./in/instr.txt" /* A SUPPRIMER */
#define FICHIER_OUT "./out/result.txt"

int main(int argc, char* argv[]){
    printf("Il y a %d lignes dans le fichier d'entrée.\n", compte_nb_lignes(FICHIER_TEST));
    printf("Il y a %d instructions dans le fichier d'entrée.\n", compte_nb_instructions(FICHIER_TEST));
    lireInstruction("instr.txt","result.txt");
    remplir_struct();
    verifier_structure_instruction();
    return 0;
}
