#include "fonction.h"
#include "fonction_str.h"

int main(int argc, char* argv[]){
    lireInstruction("./in/instr.txt");
    ecrit_hexa("./in/instr.txt", "./out/result.txt");
    verifier_structure_instruction();
    return 0;
}
