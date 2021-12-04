//#include "fonction.h"

int main(int argc, char* argv[]){
    printf("Il y a %d lignes dans le fichier d'entrée.\n", compte_nb_lignes("instr.txt"));
    printf("Il y a %d instructions dans le fichier d'entrée.\n", compte_nb_instructions("instr.txt"));
    lireInstruction("instr.txt","result.txt");
    remplir_struct();
    verifier_structure_instruction();

    return 0;
}
