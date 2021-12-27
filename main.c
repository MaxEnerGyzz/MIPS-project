//#include "fonction.h"
//#include "fonction_str.h"


int main(int argc, char* argv[]){
    char *fic_instr = argv[1]; /* ./in/instr.txt */
    char *fic_result = argv[2]; /* ./out/result.txt */
    lireInstruction(fic_instr, fic_result);
    verifier_structure_instruction(fic_instr);
    return 0;
}
