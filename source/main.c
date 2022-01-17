#include "../headers/fonction.h"
#include "../headers/fonction_str.h"
#include "../headers/registre.h"
#include "../headers/instructions.h"
#include "../headers/memoire.h"

int main(int argc, char* argv[]){
    char *fic_instr;
    int mode = choix_mode(argv[1], argv[2], argc);
    int nb_instructions_entree;
    struct registre tab_registre[NB_REGISTRES + 1];
    struct instructions tab_instruction[NB_INSTRUCTIONS_MIPS];
    unsigned char* memoire = initialiserMemoire();
    unsigned char* memoire_instr = initialiserMemoire_instr();
    if(mode != 4){
        if(mode == 0 || mode == 1){ /* Mode non-interactif ou pas-a-pas */
            fic_instr = malloc(sizeof(char)*(myStrlen(argv[1])+1));
            myStrcpy(fic_instr, argv[1]);
            nb_instructions_entree = compte_nb_inst(fic_instr);
            struct liste_instructions tab_liste_instructions[nb_instructions_entree];
            struct liste_instructions tab_liste_instructions_val[nb_instructions_entree];
            initialiserEmulateur(mode, fic_instr, nb_instructions_entree, tab_registre, tab_instruction, tab_liste_instructions, tab_liste_instructions_val, memoire_instr);

            if (mode == 0){ /* Mode non-interactif */
                mode_non_interactif(tab_liste_instructions_val, tab_registre, compte_nb_instr_val(nb_instructions_entree, tab_liste_instructions), memoire);
                ecrire_registres_fichier( tab_registre,argv[3]);
                ecrit_instr_hexa(nb_instructions_entree, argv[2], tab_liste_instructions);
<<<<<<< HEAD
                
                testMemoire(memoire_instr, memoire);
                
=======
>>>>>>> parent of 1b4ed5a (Added "steb-by-step" and "interactif" mode)
            }
            else{ /* Mode pas-a-pas */

            }
            /* verifier_structure_registre(tab_registre);
              afficher_registres(tab_registre); */
            //verifier_structure_instruction(compte_nb_instr_val(nb_instructions_entree, tab_liste_instructions), tab_liste_instructions_val);

        }

        else if(mode == 2){ /* Mode interactif */
            fic_instr = "stdin";
            nb_instructions_entree = NB_INSTRUCTIONS_MAX;
            struct liste_instructions tab_liste_instructions[nb_instructions_entree];
            struct liste_instructions tab_liste_instructions_val[nb_instructions_entree];
            initialiserEmulateur(mode, fic_instr, nb_instructions_entree, tab_registre, tab_instruction, tab_liste_instructions, tab_liste_instructions_val, memoire_instr);
            /*mode_non_interactif(tab_liste_instructions_val, tab_registre, compte_nb_instr_val(nb_instructions_entree, tab_liste_instructions));*/
        }

        /*
        verifier_structure_instruction(nb_instructions_entree, tab_liste_instructions);*/
        //verifier_structure_registre(tab_registre);
        /*verifier_structure_instruction(compte_nb_instr_val(nb_instructions_entree, tab_liste_instructions), tab_liste_instructions_val);*/
    }



    return 0;
}
