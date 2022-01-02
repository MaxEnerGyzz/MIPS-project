#include "../headers/fonction.h"
#include "../headers/fonction_str.h"
#include "../headers/registre.h"

void remplir_struct_instruction(instructions* tab_instruction){
    int i =0;
    int j=0;
    /* ADD */
    
    tab_instruction[j].instr = malloc(sizeof(char)*4);
    myStrcpy(tab_instruction[j].instr, "ADD");
    tab_instruction[j].nb_arg = 3;
    tab_instruction[j].reg = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    tab_instruction[j].reg[0]=1;
    tab_instruction[j].reg[1]=1;
    tab_instruction[j].reg[2]=1;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*tab_instruction[j].nb_arg*2);
    tab_instruction[j].pos_arg[0] = 16;
    tab_instruction[j].pos_arg[1] = 20;
    tab_instruction[j].pos_arg[2] = 6;
    tab_instruction[j].pos_arg[3] = 10;
    tab_instruction[j].pos_arg[4] = 11;
    tab_instruction[j].pos_arg[5] = 15;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[26]='1';
    tab_instruction[j].reg_protege = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    for(i=0; i<tab_instruction[j].nb_arg; i++){
        tab_instruction[j].reg_protege[i] = 0;
    }
    tab_instruction[j].reg_protege[0] = 1;
    
    /* ADDI */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*5);
    myStrcpy(tab_instruction[j].instr, "ADDI");
    tab_instruction[j].nb_arg = 3;
    tab_instruction[j].reg = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    tab_instruction[j].reg[0]=1;
    tab_instruction[j].reg[1]=1;
    tab_instruction[j].reg[2]=0;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*tab_instruction[j].nb_arg*2);
    tab_instruction[j].pos_arg[0] = 11;
    tab_instruction[j].pos_arg[1] = 15;
    tab_instruction[j].pos_arg[2] = 6;
    tab_instruction[j].pos_arg[3] = 10;
    tab_instruction[j].pos_arg[4] = 16;
    tab_instruction[j].pos_arg[5] = 31;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[2]='1';
    tab_instruction[j].reg_protege = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    for(i=0; i<tab_instruction[j].nb_arg; i++){
        tab_instruction[j].reg_protege[i] = 0;
    }
    tab_instruction[j].reg_protege[0] = 1;

    /* AND */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*4);
    myStrcpy(tab_instruction[j].instr, "AND");
    tab_instruction[j].nb_arg = 3;
    tab_instruction[j].reg = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    tab_instruction[j].reg[0]=1;
    tab_instruction[j].reg[1]=1;
    tab_instruction[j].reg[2]=1;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*tab_instruction[j].nb_arg*2);
    tab_instruction[j].pos_arg[0] = 16;
    tab_instruction[j].pos_arg[1] = 20;
    tab_instruction[j].pos_arg[2] = 6;
    tab_instruction[j].pos_arg[3] = 10;
    tab_instruction[j].pos_arg[4] = 11;
    tab_instruction[j].pos_arg[5] = 15;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[26]='1';
    tab_instruction[j].tab_bin[29]='1';
    tab_instruction[j].reg_protege = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    for(i=0; i<tab_instruction[j].nb_arg; i++){
        tab_instruction[j].reg_protege[i] = 0;
    }
    tab_instruction[j].reg_protege[0] = 1;

    
    /* BEQ */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*4);
    myStrcpy(tab_instruction[j].instr, "BEQ");
    tab_instruction[j].nb_arg = 3;
    tab_instruction[j].reg = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    tab_instruction[j].reg[0]=1;
    tab_instruction[j].reg[1]=1;
    tab_instruction[j].reg[2]=0;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*tab_instruction[j].nb_arg*2);
    tab_instruction[j].pos_arg[0] = 6;
    tab_instruction[j].pos_arg[1] = 10;
    tab_instruction[j].pos_arg[2] = 11;
    tab_instruction[j].pos_arg[3] = 15;
    tab_instruction[j].pos_arg[4] = 16;
    tab_instruction[j].pos_arg[5] = 31;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[3]='1';
    tab_instruction[j].reg_protege = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    for(i=0; i<tab_instruction[j].nb_arg; i++){
        tab_instruction[j].reg_protege[i] = 0;
    }
    
    
    
    /* BGTZ */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*5);
    myStrcpy(tab_instruction[j].instr, "BGTZ");
    tab_instruction[j].nb_arg = 2;
    tab_instruction[j].reg = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    tab_instruction[j].reg[0]=1;
    tab_instruction[j].reg[1]=0;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*tab_instruction[j].nb_arg*2);
    tab_instruction[j].pos_arg[0] = 6;
    tab_instruction[j].pos_arg[1] = 10;
    tab_instruction[j].pos_arg[2] = 16;
    tab_instruction[j].pos_arg[3] = 31;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[3]='1';
    tab_instruction[j].tab_bin[4]='1';
    tab_instruction[j].tab_bin[5]='1';
    tab_instruction[j].reg_protege = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    for(i=0; i<tab_instruction[j].nb_arg; i++){
        tab_instruction[j].reg_protege[i] = 0;
    }
    
    /* BLEZ */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*5);
    myStrcpy(tab_instruction[j].instr, "BLEZ");
    tab_instruction[j].nb_arg = 2;
    tab_instruction[j].reg = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    tab_instruction[j].reg[0]=1;
    tab_instruction[j].reg[1]=0;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*tab_instruction[j].nb_arg*2);
    tab_instruction[j].pos_arg[0] = 6;
    tab_instruction[j].pos_arg[1] = 10;
    tab_instruction[j].pos_arg[2] = 16;
    tab_instruction[j].pos_arg[3] = 31;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[3]='1';
    tab_instruction[j].tab_bin[4]='1';
    tab_instruction[j].reg_protege = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    for(i=0; i<tab_instruction[j].nb_arg; i++){
        tab_instruction[j].reg_protege[i] = 0;
    }

    /* BNE */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*4);
    myStrcpy(tab_instruction[j].instr, "BNE");
    tab_instruction[j].nb_arg = 3;
    tab_instruction[j].reg = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    tab_instruction[j].reg[0]=1;
    tab_instruction[j].reg[1]=1;
    tab_instruction[j].reg[2]=0;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*tab_instruction[j].nb_arg*2);
    tab_instruction[j].pos_arg[0] = 6;
    tab_instruction[j].pos_arg[1] = 10;
    tab_instruction[j].pos_arg[2] = 11;
    tab_instruction[j].pos_arg[3] = 15;
    tab_instruction[j].pos_arg[4] = 16;
    tab_instruction[j].pos_arg[5] = 31;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[3]='1';
    tab_instruction[j].tab_bin[5]='1';
    tab_instruction[j].reg_protege = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    for(i=0; i<tab_instruction[j].nb_arg; i++){
        tab_instruction[j].reg_protege[i] = 0;
    }

    /* DIV */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*4);
    myStrcpy(tab_instruction[j].instr, "DIV");
    tab_instruction[j].nb_arg = 2;
    tab_instruction[j].reg = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    tab_instruction[j].reg[0]=1;
    tab_instruction[j].reg[1]=1;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*tab_instruction[j].nb_arg*2);
    tab_instruction[j].pos_arg[0] = 6;
    tab_instruction[j].pos_arg[1] = 10;
    tab_instruction[j].pos_arg[2] = 11;
    tab_instruction[j].pos_arg[3] = 15;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[27]='1';
    tab_instruction[j].tab_bin[28]='1';
    tab_instruction[j].tab_bin[30]='1';
    tab_instruction[j].reg_protege = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    for(i=0; i<tab_instruction[j].nb_arg; i++){
        tab_instruction[j].reg_protege[i] = 0;
    }


    /* J */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*2);
    myStrcpy(tab_instruction[j].instr, "J");
    tab_instruction[j].nb_arg = 1;
    tab_instruction[j].reg = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    tab_instruction[j].reg[0]=0;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*tab_instruction[j].nb_arg*2);
    tab_instruction[j].pos_arg[0] = 6;
    tab_instruction[j].pos_arg[1] = 31;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[4]='1';
    tab_instruction[j].reg_protege = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    for(i=0; i<tab_instruction[j].nb_arg; i++){
        tab_instruction[j].reg_protege[i] = 0;
    }

    /* JAL */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*4);
    myStrcpy(tab_instruction[j].instr, "JAL");
    tab_instruction[j].nb_arg = 1;
    tab_instruction[j].reg = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    tab_instruction[j].reg[0]=0;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*tab_instruction[j].nb_arg*2);
    tab_instruction[j].pos_arg[0] = 6;
    tab_instruction[j].pos_arg[1] = 31;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[4]='1';
    tab_instruction[j].tab_bin[5]='1';
    tab_instruction[j].reg_protege = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    for(i=0; i<tab_instruction[j].nb_arg; i++){
        tab_instruction[j].reg_protege[i] = 0;
    }
    
    /* JR */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*3);
    myStrcpy(tab_instruction[j].instr, "JR");
    tab_instruction[j].nb_arg = 1;
    tab_instruction[j].reg = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    tab_instruction[j].reg[0]=1;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*tab_instruction[j].nb_arg*2);
    tab_instruction[j].pos_arg[0] = 6;
    tab_instruction[j].pos_arg[1] = 10;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[28]='1';
    tab_instruction[j].reg_protege = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    for(i=0; i<tab_instruction[j].nb_arg; i++){
        tab_instruction[j].reg_protege[i] = 0;
    }
    /* On laisse le bit 10 du hint à 0 car on ne gere pas le pipeline donc il n'y a pas de data hazard*/
    
    /* LUI */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*4);
    myStrcpy(tab_instruction[j].instr, "LUI");
    tab_instruction[j].nb_arg = 2;
    tab_instruction[j].reg = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    tab_instruction[j].reg[0]=1;
    tab_instruction[j].reg[1]=0;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*tab_instruction[j].nb_arg*2);
    tab_instruction[j].pos_arg[0] = 11;
    tab_instruction[j].pos_arg[1] = 15;
    tab_instruction[j].pos_arg[2] = 16;
    tab_instruction[j].pos_arg[3] = 31;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[2]='1';
    tab_instruction[j].tab_bin[3]='1';
    tab_instruction[j].tab_bin[4]='1';
    tab_instruction[j].tab_bin[5]='1';
    tab_instruction[j].reg_protege = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    for(i=0; i<tab_instruction[j].nb_arg; i++){
        tab_instruction[j].reg_protege[i] = 0;
    }
    tab_instruction[j].reg_protege[0] = 1;
    
    /* LW */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*3);
    myStrcpy(tab_instruction[j].instr, "LW");
    tab_instruction[j].nb_arg = 3;
    tab_instruction[j].reg = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    tab_instruction[j].reg[0]=1;
    tab_instruction[j].reg[1]=0;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*tab_instruction[j].nb_arg*2);
    tab_instruction[j].pos_arg[0] = 11;
    tab_instruction[j].pos_arg[1] = 15;
    tab_instruction[j].pos_arg[2] = 16;
    tab_instruction[j].pos_arg[3] = 31;
    tab_instruction[j].pos_arg[2] = 6;
    tab_instruction[j].pos_arg[3] = 10;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[1]='1';
    tab_instruction[j].tab_bin[4]='1';
    tab_instruction[j].tab_bin[5]='1';
    tab_instruction[j].reg_protege = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    for(i=0; i<tab_instruction[j].nb_arg; i++){
        tab_instruction[j].reg_protege[i] = 0;
    }
    tab_instruction[j].reg_protege[0] = 1;
    
    
    /* MFHI */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*5);
    myStrcpy(tab_instruction[j].instr, "MFHI");
    tab_instruction[j].nb_arg = 1;
    tab_instruction[j].reg = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    tab_instruction[j].reg[0]=1;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*tab_instruction[j].nb_arg*2);
    tab_instruction[j].pos_arg[0] = 16;
    tab_instruction[j].pos_arg[1] = 20;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[27]='1';
    tab_instruction[j].reg_protege = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    for(i=0; i<tab_instruction[j].nb_arg; i++){
        tab_instruction[j].reg_protege[i] = 0;
    }
    tab_instruction[j].reg_protege[0] = 1;
    

    /* MFLO */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*5);
    myStrcpy(tab_instruction[j].instr, "MFLO");
    tab_instruction[j].nb_arg = 1;
    tab_instruction[j].reg = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    tab_instruction[j].reg[0]=1;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*(tab_instruction[j].nb_arg * 2));
    tab_instruction[j].pos_arg[0] = 16;
    tab_instruction[j].pos_arg[1] = 20;

    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[30]='1';
    tab_instruction[j].tab_bin[27]='1';
    tab_instruction[j].reg_protege = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    for(i=0; i<tab_instruction[j].nb_arg; i++){
        tab_instruction[j].reg_protege[i] = 0;
    }
    tab_instruction[j].reg_protege[0] = 1;

    /* MULT */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*5);
    myStrcpy(tab_instruction[j].instr, "MULT");
    tab_instruction[j].nb_arg = 2;
    tab_instruction[j].reg = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    tab_instruction[j].reg[0]=1;
    tab_instruction[j].reg[1]=1;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*(tab_instruction[j].nb_arg * 2));
    tab_instruction[j].pos_arg[0] = 6;
    tab_instruction[j].pos_arg[1] = 10;
    tab_instruction[j].pos_arg[2] = 11;
    tab_instruction[j].pos_arg[3] = 15;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[28]='1';
    tab_instruction[j].tab_bin[27]='1';
    tab_instruction[j].reg_protege = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    for(i=0; i<tab_instruction[j].nb_arg; i++){
        tab_instruction[j].reg_protege[i] = 0;
    }


    /* NOP */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*4);
    myStrcpy(tab_instruction[j].instr, "NOP");
    tab_instruction[j].nb_arg = 0;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].reg_protege = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    for(i=0; i<tab_instruction[j].nb_arg; i++){
        tab_instruction[j].reg_protege[i] = 0;
    }

    /* OR */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*3);
    myStrcpy(tab_instruction[j].instr, "OR");
    tab_instruction[j].nb_arg = 3;
    tab_instruction[j].reg = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    tab_instruction[j].reg[0]=1;
    tab_instruction[j].reg[1]=1;
    tab_instruction[j].reg[2]=1;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*(tab_instruction[j].nb_arg * 2));
    tab_instruction[j].pos_arg[0] = 16;
    tab_instruction[j].pos_arg[1] = 20;
    tab_instruction[j].pos_arg[2] = 6;
    tab_instruction[j].pos_arg[3] = 10;
    tab_instruction[j].pos_arg[4] = 11;
    tab_instruction[j].pos_arg[5] = 15;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[31]='1';
    tab_instruction[j].tab_bin[29]='1';
    tab_instruction[j].tab_bin[26]='1';
    tab_instruction[j].reg_protege = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    for(i=0; i<tab_instruction[j].nb_arg; i++){
        tab_instruction[j].reg_protege[i] = 0;
    }
    tab_instruction[j].reg_protege[0] = 1;


    /* ROTR */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*5);
    myStrcpy(tab_instruction[j].instr, "ROTR");
    tab_instruction[j].nb_arg = 3;
    tab_instruction[j].reg = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    tab_instruction[j].reg[0]=1;
    tab_instruction[j].reg[1]=1;
    tab_instruction[j].reg[2]=0;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*(tab_instruction[j].nb_arg * 2));
    tab_instruction[j].pos_arg[0] = 16;
    tab_instruction[j].pos_arg[1] = 20;
    tab_instruction[j].pos_arg[2] = 11;
    tab_instruction[j].pos_arg[3] = 15;
    tab_instruction[j].pos_arg[4] = 21;
    tab_instruction[j].pos_arg[5] = 25;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[30]='1';
    tab_instruction[j].reg_protege = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    for(i=0; i<tab_instruction[j].nb_arg; i++){
        tab_instruction[j].reg_protege[i] = 0;
    }
    tab_instruction[j].reg_protege[0] = 1;

    /* SLL */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*4);
    myStrcpy(tab_instruction[j].instr, "SLL");
    tab_instruction[j].nb_arg = 3;
    tab_instruction[j].reg = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    tab_instruction[j].reg[0]=1;
    tab_instruction[j].reg[1]=1;
    tab_instruction[j].reg[2]=0;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*(tab_instruction[j].nb_arg * 2));
    tab_instruction[j].pos_arg[0] = 16;
    tab_instruction[j].pos_arg[1] = 20;
    tab_instruction[j].pos_arg[2] = 11;
    tab_instruction[j].pos_arg[3] = 15;
    tab_instruction[j].pos_arg[4] = 21;
    tab_instruction[j].pos_arg[5] = 25;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].reg_protege = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    for(i=0; i<tab_instruction[j].nb_arg; i++){
        tab_instruction[j].reg_protege[i] = 0;
    }
    tab_instruction[j].reg_protege[0] = 1;


    /* SLT */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*4);
    myStrcpy(tab_instruction[j].instr, "SLT");
    tab_instruction[j].nb_arg = 3;
    tab_instruction[j].reg = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    tab_instruction[j].reg[0]=1;
    tab_instruction[j].reg[1]=1;
    tab_instruction[j].reg[2]=1;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*(tab_instruction[j].nb_arg * 2));
    tab_instruction[j].pos_arg[0] = 16;
    tab_instruction[j].pos_arg[1] = 20;
    tab_instruction[j].pos_arg[2] = 6;
    tab_instruction[j].pos_arg[3] = 10;
    tab_instruction[j].pos_arg[4] = 11;
    tab_instruction[j].pos_arg[5] = 15;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[30]='1';
    tab_instruction[j].tab_bin[28]='1';
    tab_instruction[j].tab_bin[26]='1';
    tab_instruction[j].reg_protege = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    for(i=0; i<tab_instruction[j].nb_arg; i++){
        tab_instruction[j].reg_protege[i] = 0;
    }
    tab_instruction[j].reg_protege[0] = 1;

    /* SRL */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*4);
    myStrcpy(tab_instruction[j].instr, "SRL");
    tab_instruction[j].nb_arg = 3;
    tab_instruction[j].reg = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    tab_instruction[j].reg[0]=1;
    tab_instruction[j].reg[1]=1;
    tab_instruction[j].reg[2]=0;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*(tab_instruction[j].nb_arg * 2));
    tab_instruction[j].pos_arg[0] = 16;
    tab_instruction[j].pos_arg[1] = 20;
    tab_instruction[j].pos_arg[2] = 11;
    tab_instruction[j].pos_arg[3] = 15;
    tab_instruction[j].pos_arg[4] = 21;
    tab_instruction[j].pos_arg[5] = 25;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[30]='1';
    tab_instruction[j].reg_protege = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    for(i=0; i<tab_instruction[j].nb_arg; i++){
        tab_instruction[j].reg_protege[i] = 0;
    }
    tab_instruction[j].reg_protege[0] = 1;

    /* SUB */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*4);
    myStrcpy(tab_instruction[j].instr, "SUB");
    tab_instruction[j].nb_arg = 3;
    tab_instruction[j].reg = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    tab_instruction[j].reg[0]=1;
    tab_instruction[j].reg[1]=1;
    tab_instruction[j].reg[2]=1;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*(tab_instruction[j].nb_arg * 2));
    tab_instruction[j].pos_arg[0] = 16;
    tab_instruction[j].pos_arg[1] = 20;
    tab_instruction[j].pos_arg[2] = 6;
    tab_instruction[j].pos_arg[3] = 10;
    tab_instruction[j].pos_arg[4] = 11;
    tab_instruction[j].pos_arg[5] = 15;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[26]='1';
    tab_instruction[j].tab_bin[30]='1';
    tab_instruction[j].reg_protege = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    for(i=0; i<tab_instruction[j].nb_arg; i++){
        tab_instruction[j].reg_protege[i] = 0;
    }
    tab_instruction[j].reg_protege[0] = 1;


    /* SW */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*3);
    myStrcpy(tab_instruction[j].instr, "SW");
    tab_instruction[j].nb_arg = 3;
    tab_instruction[j].reg = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    tab_instruction[j].reg[0]=1;
    tab_instruction[j].reg[1]=0;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*(tab_instruction[j].nb_arg * 2));
    tab_instruction[j].pos_arg[0] = 11;
    tab_instruction[j].pos_arg[1] = 15;
    tab_instruction[j].pos_arg[2] = 14;
    tab_instruction[j].pos_arg[3] = 31;
    tab_instruction[j].pos_arg[4] = 6;
    tab_instruction[j].pos_arg[5] = 10;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[0]='1';
    tab_instruction[j].tab_bin[2]='1';
    tab_instruction[j].tab_bin[4]='1';
    tab_instruction[j].tab_bin[5]='1';
    tab_instruction[j].reg_protege = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    for(i=0; i<tab_instruction[j].nb_arg; i++){
        tab_instruction[j].reg_protege[i] = 0;
    }
    
    /* SYSCALL */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*8);
    myStrcpy(tab_instruction[j].instr, "SYSCALL");
    tab_instruction[j].nb_arg = 0;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[28]='1';
    tab_instruction[j].tab_bin[29]='1';
    tab_instruction[j].reg_protege = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    for(i=0; i<tab_instruction[j].nb_arg; i++){
        tab_instruction[j].reg_protege[i] = 0;
    }
    
    /* XOR */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*4);
    myStrcpy(tab_instruction[j].instr, "XOR");
    tab_instruction[j].nb_arg = 3;
    tab_instruction[j].reg = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    tab_instruction[j].reg[0]=1;
    tab_instruction[j].reg[1]=1;
    tab_instruction[j].reg[2]=1;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*(tab_instruction[j].nb_arg * 2));
    tab_instruction[j].pos_arg[0] = 16;
    tab_instruction[j].pos_arg[1] = 20;
    tab_instruction[j].pos_arg[2] = 6;
    tab_instruction[j].pos_arg[3] = 10;
    tab_instruction[j].pos_arg[4] = 11;
    tab_instruction[j].pos_arg[5] = 15;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[26]='1';
    tab_instruction[j].tab_bin[29]='1';
    tab_instruction[j].tab_bin[30]='1';
    tab_instruction[j].reg_protege = malloc(sizeof(int)*tab_instruction[j].nb_arg);
    for(i=0; i<tab_instruction[j].nb_arg; i++){
        tab_instruction[j].reg_protege[i] = 0;
    }
    tab_instruction[j].reg_protege[0] = 1;
}

int recupereInstr(FILE* ficInstr, char* tmp){ /* Retourne 1 si on est à la fin du fichier, 0 sinon*/
    char carac = fgetc(ficInstr);
    int i=0, fin =0;
    long int position_curseur = ftell(ficInstr);
    while(carac == ' '){ /* Cas ou la ligne commence par un espace */
        carac= fgetc(ficInstr);
    }
    if(carac == '#'){ /* Cas où une ligne commence par un commentaire*/
        while(carac != 10 && carac != EOF){
            carac= fgetc(ficInstr);
        }
    }
    while(carac != 10 && carac != EOF && carac != '#'){ /* Le caractere ASCII 10 est le saut de ligne*/
        tmp[i] = carac;
        i++;
        carac= fgetc(ficInstr);
    }
    if(carac == '#'){ // Cas où une ligne finit par un commentaire
        while(carac != 10 && carac != EOF){
            carac= fgetc(ficInstr);
        }
    }
    position_curseur = ftell(ficInstr); /* On sauvegarde la position du curseur du fichier */
    carac=fgetc(ficInstr);
    if(carac == 10){ /* S'il y a un saut de ligne apres l'instruction */
        while(carac == 10){ /* On passe a la ligne suivante jusqu'a retomber sur une instruction ou la fin du fichier */
            position_curseur = ftell(ficInstr);
            carac = fgetc(ficInstr);
        }
        fseek(ficInstr, position_curseur, SEEK_SET); /* On retourne au caractere précédent */
    }
    else{ /* S'il n'y a pas de saut de ligne, on replace le pointeur du fichier */
        fseek(ficInstr, position_curseur, SEEK_SET);
    }
    
    if(carac == EOF){  /*Pas de Else if car si on met un commentaire sur la derniere ligne ca va pas renvoyer 1*/
        fin = 1;
    }
    tmp[i]='\0';
    if(i==0){  /* Si la ligne commence par un commentaire, on réappelle la fonction pour aller a la fin de la ligne et passer à la suivante */
        fin = recupereInstr(ficInstr, tmp);
    }
    return fin;
}


int recherche_instr_dans_structure(char* nom_instr, instructions* tab_instruction){
    int trouve = 0;
    int i = 0;
    while(!trouve && i<26){
        if(!comparerChaine(tab_instruction[i].instr, nom_instr)){
            i++;
        }
        else{
            trouve = 1;
        }
    }
    return i;
}

void remplir_liste_instructions(char* instruction, int instruction_actuelle, liste_instructions* tab_liste_instructions, instructions* tab_instruction, registre* tab_registre){
    char nom_instr[8];
    int i = 0, j=0, k=0; /* i pointe vers le caractere en cours*/
    char argument_char[10];
    int pos_instr; /* Transcrit l'instruction en binaire, puis en héxa */
    char arg_en_str[32];
    int arg_en_int=0;
    char arg_en_binaire[32];
    int erreur_longueur = 0; /* Indique si un argument est trop grand pour l'instruction */
    int nb_bits_max;
    double arg_base2;
    
    tab_liste_instructions[instruction_actuelle].instruction_valide = 1;

    while(instruction[i]!=' '){ /* Récupère le nom de l'instruction */
        nom_instr[i]= instruction[i];
        i++;
    }
    nom_instr[i] = '\0';
    tab_liste_instructions[instruction_actuelle].instr = malloc(sizeof(char)*myStrlen(nom_instr));
    myStrcpy(tab_liste_instructions[instruction_actuelle].instr,nom_instr);
    if(recherche_instr_dans_structure(nom_instr, tab_instruction)<26){
        tab_liste_instructions[instruction_actuelle].pos_instr_struct = recherche_instr_dans_structure(nom_instr, tab_instruction);
    }
    else{
        printf("ERREUR dans l'instruction : %s\n", instruction);
        tab_liste_instructions[instruction_actuelle].instruction_valide = 0;
    }

    pos_instr = tab_liste_instructions[instruction_actuelle].pos_instr_struct;
    tab_liste_instructions[instruction_actuelle].nb_arg = tab_instruction[pos_instr].nb_arg;
    myStrcpy(tab_liste_instructions[instruction_actuelle].tab_bin, tab_instruction[pos_instr].tab_bin); /* Récupère le tableau binaire associé */
    
    tab_liste_instructions[instruction_actuelle].arg = malloc(sizeof(char)*tab_liste_instructions[instruction_actuelle].nb_arg);
    
    
    i++; /* i pointe désormais vers le premier argument*/


    for(j = 0; j < tab_liste_instructions[instruction_actuelle].nb_arg; j++){ /* Récupère les arguments */
        if(tab_instruction[pos_instr].reg[j] == 1){ /* Dans le cas ou l'operande doit etre un registre */
            if(instruction[i] == '$'){ /* Si c'est un registre on lit sa valeur */
                i++;
            }
            else{ /* si ce n'est pas un registre, on renvoit une erreur */
                printf("L'argument %d doit etre un registre dans l'instruction %s \n", j+1, instruction);
                tab_liste_instructions[instruction_actuelle].instruction_valide = 0;
            }
        }
        else{ /* Dans le cas ou l'operande doit etre un immediat */
            if(instruction[i] < '0' || instruction[i]>'9'){ /* si ce n'est pas un immediat (le caractere est compris entre 0 et 9), on renvoit une erreur */
                printf("L'argument %d doit etre un immediate dans l'instruction %s \n", j+1, instruction);
                tab_liste_instructions[instruction_actuelle].instruction_valide = 0;
            }
        }
        
        k=0;
        while(instruction[i] != ',' && instruction[i] != ' ' && instruction[i] != '\0'){
            argument_char[k] = instruction[i];
            i++;
            k++;
        }
        argument_char[k] = '\0';
        
        while(instruction[i] == ',' || instruction[i] == ' '){
            i++;
        }
        if(tab_instruction[pos_instr].reg[j] == 1){ /* Si l'operande est un registre */
            if (estUnInt(argument_char)){ /* S'il est appelé par son numéro. On recupere sa valeur */
                arg_en_int = valeurDecimale(argument_char);
            }
            else{ /* S'il est appelé par son nom, on recupere son numero */
                arg_en_int = estUnRegistre(argument_char, tab_registre);
                if (arg_en_int == -1){
                    tab_liste_instructions[instruction_actuelle].instruction_valide = 0;
                }
            }
            tab_liste_instructions[instruction_actuelle].arg[j] = arg_en_int;
        }
        else{
            tab_liste_instructions[instruction_actuelle].arg[j] = valeurDecimale(argument_char);
        }

        if(tab_instruction[tab_liste_instructions[instruction_actuelle].pos_instr_struct].reg_protege[j] == 1 && estUnRegistreProtege(argument_char, tab_registre)){
            printf("ERREUR: Tentative d'écriture dans le registre %s protégé en écriture.\n", argument_char);
            tab_liste_instructions[instruction_actuelle].instruction_valide = 0;
        }

        intToStr(tab_liste_instructions[instruction_actuelle].arg[j], arg_en_str);
        decToBin(arg_en_str, arg_en_binaire);
        
        arg_base2 = (ceil(log2(tab_liste_instructions[instruction_actuelle].arg[j]))); /* Vérifie que l'argument n'est pas trop grand */
        nb_bits_max = tab_instruction[pos_instr].pos_arg[(2*j) + 1] - tab_instruction[pos_instr].pos_arg[2* j] + 1;  
        if(arg_base2 > nb_bits_max){
            printf("ERREUR: L'argument %d de l'instruction '%s' est trop grand. La valeur maximale d'entrée pour cette argument est: %d\n", tab_liste_instructions[instruction_actuelle].arg[j], nom_instr, myPower2(nb_bits_max) - 1);
            erreur_longueur = 1;
            tab_liste_instructions[instruction_actuelle].instruction_valide = 0;
        }
        if(!erreur_longueur){
            copierChaineGaucheDroite(arg_en_binaire, tab_liste_instructions[instruction_actuelle].tab_bin, tab_instruction[pos_instr].pos_arg[2* j], tab_instruction[pos_instr].pos_arg[(2*j) + 1]);
        }
    }
    binToHex(tab_liste_instructions[instruction_actuelle].tab_bin, tab_liste_instructions[instruction_actuelle].tab_hexa);
}    

void verifier_structure_instruction(char* fic_instr, liste_instructions* tab_liste_instructions){
    int nb_instructions = compte_nb_inst(fic_instr);
    int i = 0, j=0;
    printf("\n\nIl y a %d lignes dans le fichier d'entrée.\n", compte_nb_lignes(fic_instr));
    printf("Il y a %d instructions dans le fichier d'entrée.\n\n", compte_nb_inst(fic_instr));


    printf("----------------------------------------------------------\n");
    for(i = 0; i < nb_instructions; i++){
        printf("Nom d'instruction: %s\n", tab_liste_instructions[i].instr);
        printf("Position de l'instruction: %d\n", tab_liste_instructions[i].pos_instr_struct);
        printf("Nombre d'arguments: %d\n", tab_liste_instructions[i].nb_arg);
        for(j = 0; j < tab_liste_instructions[i].nb_arg; j++){
            printf("Argument n°%d: %d\n", (j+1), tab_liste_instructions[i].arg[j]);
        }
        printf("Tableau binaire associé: %s\n", tab_liste_instructions[i].tab_bin);
        printf("Tableau hexadecimal associé: %s\n", tab_liste_instructions[i].tab_hexa);
        printf("Instruction valide ? ");
        if(tab_liste_instructions[i].instruction_valide == 1){
            printf("OUI\n");
        }
        else{
            printf("NON\n");
        }
        printf("----------------------------------------------------------\n");
    }
}




int compte_nb_inst(char* fichierInstr){
    FILE* ficInstr = fopen(fichierInstr, "r");
    char instruction[32];
    int nb_instructions=0;
    instruction[0] = '\0';

    if (ficInstr != NULL){
        nb_instructions=0;
        while(!(recupereInstr(ficInstr, instruction))){
            nb_instructions++;
            instruction[0] = '\0';
        }
        if(instruction[0] != '\0'){
            nb_instructions++;
        }
    }
    else{
        printf("ERREUR : Problème d'ouverture du fichier.");
    }
    return nb_instructions;
}

int compte_nb_lignes(char* fichierInstr){
    FILE* ficInstr = fopen(fichierInstr, "r");
    int nb_lignes = 0;
    char carac = fgetc(ficInstr);

    if (ficInstr != NULL){
        while(carac != EOF){
            if(carac == '\n' || carac == EOF){
                nb_lignes++;
            }
            carac = fgetc(ficInstr);
        }
        fclose(ficInstr);
        return(nb_lignes + 1); 
    }
    else{
        printf("ERREUR : Problème d'ouverture du fichier.");
        return(-1);
    }
}

void ecrit_instr_hexa(char* fichier_in, char* fichier_sortie, liste_instructions* tab_liste_instructions){
    FILE* ficHex;
    int nb_instructions = compte_nb_inst(fichier_in);
    ficHex = fopen(fichier_sortie, "w+");

    for(int i = 0; i < nb_instructions; i++){
        fprintf(ficHex,"%s\n", tab_liste_instructions[i].tab_hexa);
    }
    fclose(ficHex);
}


void initialiserEmulateur(char* fichierInstr, char* fichierResult, registre* tab_registre, instructions* tab_instruction, liste_instructions* tab_liste_instructions){
    remplir_struct_instruction(tab_instruction);
    remplir_struc_registre(tab_registre);
    lireInstruction(fichierInstr, fichierResult, tab_liste_instructions, tab_instruction, tab_registre);
}

void lireInstruction(char* fichierInstr, char* fichierResult, liste_instructions* tab_liste_instructions, instructions* tab_instruction, registre* tab_registre){
    FILE* ficInstr;
    ficInstr = fopen(fichierInstr, "r");
    char instruction[33];
    int nb_instructions = 0;


    if (ficInstr != NULL){
        while(!(recupereInstr(ficInstr, instruction))){ /* On lit chaque ligne une par une jusqu'à la fin du fichier */
            mettreEnMajuscule(instruction); /* On rend la dénomination des registres insensible à la casse */
            remplir_liste_instructions(instruction, nb_instructions, tab_liste_instructions, tab_instruction, tab_registre);
            nb_instructions++;
        }
        mettreEnMajuscule(instruction);
        remplir_liste_instructions(instruction, nb_instructions, tab_liste_instructions, tab_instruction, tab_registre);
        fclose(ficInstr);
        ecrit_instr_hexa(fichierInstr, fichierResult, tab_liste_instructions);
    }
    else{
        printf("\nERREUR :  Impossible d'ouvrir le fichier d'entrée.\n");
    }
}
