#include "../headers/fonction.h"
#include "../headers/fonction_str.h"
#include "../headers/registre.h"


int main(int argc, char* argv[]){
    char *fic_instr = argv[1]; /* ./in/instr.txt */
    char *fic_result = argv[2]; /* ./out/result.txt */

    int nb_instructions_entree = compte_nb_inst(fic_instr);
    struct registre tab_registre[NB_REGISTRES + 1];
    struct instructions tab_instruction[NB_INSTRUCTIONS_MIPS];
    struct liste_instructions tab_liste_instructions[nb_instructions_entree]; 
    struct liste_instructions tab_liste_instructions_val[nb_instructions_entree]; 

    initialiserEmulateur(fic_instr, fic_result, &tab_registre, &tab_instruction, &tab_liste_instructions);
    verifier_structure_instruction(tab_liste_instructions);
    verifier_structure_registre(tab_registre);

    remplir_liste_instructions_valide(tab_liste_instructions, tab_liste_instructions_val);
    verifier_structure_instruction(tab_liste_instructions_val);

    printf("Longueur structure 1: %d", sizeof(tab_instruction)/sizeof((tab_instruction)[0]));

    return 0;
}
