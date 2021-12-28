#include "fonction.h"
#include "fonction_str.h"
#include "registre.h"


int main(int argc, char* argv[]){
    char *fic_instr = argv[1]; /* ./in/instr.txt */
    char *fic_result = argv[2]; /* ./out/result.txt */
    lireInstruction(fic_instr, fic_result);
    verifier_structure_instruction(fic_instr);
    verifier_structure_registre();
    estUnRegistreProtege("S7");
    return 0;
}
