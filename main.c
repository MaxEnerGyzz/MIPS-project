#include "fonction.h"
#include "fonction_str.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    remplir_struct();
    lireInstruction("./in/instr.txt");
    ecrit_hexa("./in/instr.txt", "./out/result.txt");
    verifier_structure_instruction();
    return 0;
}
