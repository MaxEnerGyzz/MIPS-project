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

    initialiserEmulateur(fic_instr, fic_result, nb_instructions_entree, tab_registre, tab_instruction, tab_liste_instructions, tab_liste_instructions_val);
    
    verifier_structure_instruction(nb_instructions_entree, tab_liste_instructions);
    verifier_structure_registre(tab_registre);
    verifier_structure_instruction(compte_nb_instr_val(nb_instructions_entree, tab_liste_instructions), tab_liste_instructions_val);


    return 0;
}
