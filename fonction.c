#include "fonction.h"

int myStrlen(const char *str){
    int result =0 ;
    char carac = str[0];
    while(carac != '\0'){
        result++;
        carac = str[result];
    }
    return result;
}
void myStrcpy(char *str, char* str2){
    int i=0;
    int taille = myStrlen(str2);
    for(i=0; i<=taille; i++){
        str[i]=str[i];
    }
}

char* mettreEnMajuscule(char* str){
    int index = 0;
    for(index = 0; index < myStrlen(str); index++){
        if(str[index] >=97 && str[index] <= 122){
            str[index] -= 32;
        }
    }
    return str;
}
void retournerMot(char* mot){
	int i, n;
	n = myStrlen(mot);
  char res[n + 1];
	for (i=0; i<n; i++){
		res[i] = mot[n-1-i];
	}
	res[i] = '\0';
  copierChaine(mot, res, 0);
}

int valeurDecimale(char* str){
    int index=0, resultat=0, multiplication=1;
    for(index = myStrlen(str)-1; index >=0; index--){
        if(str[index] >=48 && str[index] <= 57){
            resultat += (str[index] - 48)*multiplication;
            multiplication = multiplication*10;
        }
    }
    return resultat;
}
void decToBin(char *strDec, char* strBin){
  int nb = valeurDecimale(strDec);
  int i =0, unit=0;
  while(nb!=0){
    unit = nb%2;
    nb = (nb-unit)/2;
    strBin[i] = unit+48;
    i++;
  }
  strBin[i]='\0';
  retournerMot(strBin);
}
void binToHex(char *strBin, char *strHexa){
  int i =0, i2=0, unit=0;
  for(i=0;i<8;i++){
    unit=strBin[i*4]-48;
    for(i2=1;i2<4;i2++){
      unit = 2*unit + strBin[i*4+i2]-48;
    }

    if(unit<10){
      strHexa[i] = unit+48;
    }

    else{
      strHexa[i] = unit+55;
    }
  }
  strHexa[8]='\0';
}

int comparerChaine(char *chaine1, char* chaine2){

  int result = 0, i =0 ;
  while(chaine1[i] == chaine2[i] && chaine1[i] != '\0' && chaine2[i] != '\0'){
    i++;
  }
  if(chaine1[i] == '\0' && chaine2[i] == '\0'){
    result = 1;
  }
  return result;

}
void copierChaine(const char* tab_tmp, char *tab_bin, int pos){
  int index=0, taille = myStrlen(tab_tmp);
  for (index=0; index<taille; index++){
    tab_bin[index+pos] = tab_tmp[index];
  }
}
void copierChaineGauche(const char* tab_tmp, char *tab_bin, int pos){
  int index, taille = myStrlen(tab_tmp), index2 = 0;
  for(index = pos ; index > pos- taille; index--){
    tab_bin[index] = tab_tmp[index2];
    index2++;
  }
} // Copie une chaine en partant de la gauche




void remplir_struct(){
    int i =0;
    int j=0;
    /* ADD */
    
    tab_instruction[j].instr = malloc(sizeof(char)*4);
    myStrcpy(tab_instruction[j].instr, "ADD");
    tab_instruction[j].nb_arg = 3;
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
    
    /* ADDI */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*5);
    myStrcpy(tab_instruction[j].instr, "ADDI");
    tab_instruction[j].nb_arg = 3;
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
    
    /* AND */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*4);
    myStrcpy(tab_instruction[j].instr, "AND");
    tab_instruction[j].nb_arg = 3;
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
    
    
    /* BEQ */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*4);
    myStrcpy(tab_instruction[j].instr, "BEQ");
    tab_instruction[j].nb_arg = 3;
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
    
    
    /* BGTZ */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*5);
    myStrcpy(tab_instruction[j].instr, "BGTZ");
    tab_instruction[j].nb_arg = 2;
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
    
    
    /* BLEZ */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*5);
    myStrcpy(tab_instruction[j].instr, "BLEZ");
    tab_instruction[j].nb_arg = 2;
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
    
    /* BNE */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*4);
    myStrcpy(tab_instruction[j].instr, "BNE");
    tab_instruction[j].nb_arg = 3;
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
    
    /* DIV */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*4);
    myStrcpy(tab_instruction[j].instr, "DIV");
    tab_instruction[j].nb_arg = 2;
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
    
    /* J */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*2);
    myStrcpy(tab_instruction[j].instr, "J");
    tab_instruction[j].nb_arg = 1;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*tab_instruction[j].nb_arg*2);
    tab_instruction[j].pos_arg[0] = 6;
    tab_instruction[j].pos_arg[1] = 31;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[4]='1';
    
    /* JAL */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*4);
    myStrcpy(tab_instruction[j].instr, "JAL");
    tab_instruction[j].nb_arg = 1;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*tab_instruction[j].nb_arg*2);
    tab_instruction[j].pos_arg[0] = 6;
    tab_instruction[j].pos_arg[1] = 31;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[4]='1';
    tab_instruction[j].tab_bin[5]='1';
    
    
    /* JR */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*3);
    myStrcpy(tab_instruction[j].instr, "JR");
    tab_instruction[j].nb_arg = 1;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*tab_instruction[j].nb_arg*2);
    tab_instruction[j].pos_arg[0] = 6;
    tab_instruction[j].pos_arg[1] = 10;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[28]='1';
    /* On laisse le bit 10 du hint à 0 car on ne gere pas le pipeline donc il n'y a pas de data hazard*/
    
    
    /* LUI */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*4);
    myStrcpy(tab_instruction[j].instr, "LUI");
    tab_instruction[j].nb_arg = 2;
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
    
    
    /* LW */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*3);
    myStrcpy(tab_instruction[j].instr, "LW");
    tab_instruction[j].nb_arg = 3;
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
    
    
    /* MFHI */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*5);
    myStrcpy(tab_instruction[j].instr, "MFHI");
    tab_instruction[j].nb_arg = 1;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*tab_instruction[j].nb_arg*2);
    tab_instruction[j].pos_arg[0] = 16;
    tab_instruction[j].pos_arg[1] = 20;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[27]='1';
    

    /* MFLO */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*5);
    myStrcpy(tab_instruction[j].instr, "MFLO");
    tab_instruction[j].nb_arg = 1;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*(tab_instruction[j].nb_arg * 2));
    tab_instruction[j].pos_arg[0] = 16;
    tab_instruction[j].pos_arg[1] = 20;

    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[30]='1';
    tab_instruction[j].tab_bin[27]='1';

    /* MULT */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*5);
    myStrcpy(tab_instruction[j].instr, "MULT");
    tab_instruction[j].nb_arg = 2;
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


    /* NOP */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*4);
    myStrcpy(tab_instruction[j].instr, "NOP");
    tab_instruction[j].nb_arg = 0;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';

    /* OR */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*3);
    myStrcpy(tab_instruction[j].instr, "OR");
    tab_instruction[j].nb_arg = 3;
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

    /* ROTR */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*5);
    myStrcpy(tab_instruction[j].instr, "ROTR");
    tab_instruction[j].nb_arg = 3;
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

    /* SLL */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*4);
    myStrcpy(tab_instruction[j].instr, "SLL");
    tab_instruction[j].nb_arg = 3;
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


    /* SLT */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*4);
    myStrcpy(tab_instruction[j].instr, "SLT");
    tab_instruction[j].nb_arg = 3;
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

    /* SRL */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*4);
    myStrcpy(tab_instruction[j].instr, "SRL");
    tab_instruction[j].nb_arg = 3;
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

    /* SUB */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*4);
    myStrcpy(tab_instruction[j].instr, "SUB");
    tab_instruction[j].nb_arg = 3;
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


    /* SW */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*3);
    myStrcpy(tab_instruction[j].instr, "SW");
    tab_instruction[j].nb_arg = 3;
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
    
    /* SYSCALL */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*8);
    myStrcpy(tab_instruction[j].instr, "SYSCALL");
    tab_instruction[j].nb_arg = 1;
    tab_instruction[j].pos_arg = malloc(sizeof(int)*(tab_instruction[25].nb_arg * 2));
    tab_instruction[j].pos_arg[0] = 6;
    tab_instruction[j].pos_arg[1] = 25;
    for(i=0; i<32; i++){
        tab_instruction[j].tab_bin[i] = '0';
    }
    tab_instruction[j].tab_bin[32]= '\0';
    tab_instruction[j].tab_bin[28]='1';
    tab_instruction[j].tab_bin[29]='1';
    
    /* XOR */
    j++;
    tab_instruction[j].instr = malloc(sizeof(char)*4);
    myStrcpy(tab_instruction[j].instr, "XOR");
    tab_instruction[j].nb_arg = 3;
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
}



/*
  if(comparerChaine(tab_instr, "ADD")){

  }
  else if(comparerChaine(tab_instr, "ADDI")){

  }
  else if(comparerChaine(tab_instr, "AND")){

  }
  else if(comparerChaine(tab_instr, "BEQ")){

  }
  else if(comparerChaine(tab_instr, "BGTZ")){

  }
  else if(comparerChaine(tab_instr, "BLEZ")){

  }
  else if(comparerChaine(tab_instr, "BNE")){

  }
  else if(comparerChaine(tab_instr, "DIV")){

  }
  else if(comparerChaine(tab_instr, "J")){

  }
  else if(comparerChaine(tab_instr, "JAL")){

  }
  else if(comparerChaine(tab_instr, "JR")){

  }
  else if(comparerChaine(tab_instr, "LUI")){

  }
  else if(comparerChaine(tab_instr, "LW")){

  }
  else if(comparerChaine(tab_instr, "MFHI")){

  }
  else if(comparerChaine(tab_instr, "MFLO")){

  }
  else if(comparerChaine(tab_instr, "MULT")){

  }
  else if(comparerChaine(tab_instr, "NOP")){

  }
  else if(comparerChaine(tab_instr, "OR")){

  }
  else if(comparerChaine(tab_instr, "ROTR")){

  }
  else if(comparerChaine(tab_instr, "SLL")){

  }
  else if(comparerChaine(tab_instr, "SLT")){

  }
  else if(comparerChaine(tab_instr, "SRL")){

  }
  else if(comparerChaine(tab_instr, "SUB")){

  }
  else if(comparerChaine(tab_instr, "SW")){

  }
  else if(comparerChaine(tab_instr, "SYSCALL")){

  }
  else if(comparerChaine(tab_instr, "XOR")){

  }
*/


int recupereInstr(FILE* ficInstr, char* tmp){ /* Retourne 1 si on est à la fin du fichier, 0 sinon*/
    char carac = fgetc(ficInstr);
    int i=0, result =0;
    while(carac != 13 && carac != EOF && carac != '#'){ /* Le caractere ASCII 13 est le retour chariot*/
        tmp[i] = carac;
        i++;
        carac= fgetc(ficInstr);
    }
    if(carac == '#'){
        while(carac != 13 && carac != EOF){
            carac= fgetc(ficInstr);
        }
    }
    else if(carac == EOF){
        result = 1;
    }
    return result;
}



void lireInstruction(char* fichierInstr, char* fichierHex){
    FILE* ficInstr;
    FILE* ficHex;
    int i = 0;
    char instruction[50];
    char tab_instr[32];
    ficInstr = fopen(fichierInstr, "r");
    ficHex = fopen(fichierHex, "w+");

    if (ficInstr != NULL && ficHex != NULL){
        carac = fgetc(ficInstr);
        while(carac != EOF){ // On lit chaque ligne jusqu'à la fin du fichier
            i = 0;
            while(instruction[i] != ' '){ // Récupération de l'instruction
                tab_instr[i] = instruction[i];
                i++;
            }
            tab_instr[i] = '\0';
            mettreEnMajuscule(tab_instr);

            printf("Instruction: %s\n", tab_instr);


        }
        fclose(ficInstr);
        fclose(ficHex);
    }

    else if(ficHex == NULL && ficInstr != NULL){
        printf("\nERREUR :  Impossible d'ouvrir le fichier %s\n", fichierHex);
        fclose(ficInstr);
    }
    else if(ficHex != NULL && ficInstr == NULL){
        printf("\nERREUR :  Impossible d'ouvrir le fichier %s\n", fichierInstr);
        fclose(ficHex);
    }
    else{
        printf("\nERREUR :  Impossible d'ouvrir les 2 fichiers\n");
    }
}
