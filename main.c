#include "fonction.h"

int main(int argc, char* argv[]){
    char hex[9];
    remplir_struct();
    tab_instruction[0].tab_bin[9]='1';
    tab_instruction[0].tab_bin[10]='1';
    tab_instruction[0].tab_bin[13]='1';
    tab_instruction[0].tab_bin[19]='1';
    binToHex(tab_instruction[0].tab_bin, hex);
    printf("%s\n", tab_instruction[0].tab_bin);
    printf("%s\n", hex);
    
    lireInstruction("instr.txt","result.txt");
    
    return 0;
}
