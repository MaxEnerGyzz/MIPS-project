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
        str[i]=str2[i];
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

void intToStr(int nombre, char *chaine){
    int index = 0;

    int n = nombre < 0 ? -nombre : nombre;
    int neg = nombre < 0 ? 1 : 0;

    while (nombre != 0)
    {
        chaine[index++] = nombre % 10 + '0';
        nombre /= 10;
    }
    if (neg)
        chaine[index++] = '-';

    chaine[index++] = '\0';

    retournerMot(chaine);
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
} 
void copierChaineGaucheDroite(const char* tab_tmp, char *tab_bin, int posG, int posD){
    int index1 = posG, index2 = posD, taille = myStrlen(tab_tmp), index3 = 0;
    while(index1 < index2 + 1 && index3 < taille){
        tab_bin[index2] = tab_tmp[index3];
        index2--;
        index3++;
    }
}




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
    if(carac == '#'){ /* Cas où une ligne commence par un commentaire*/
        while(carac != 10 && carac != EOF){
            carac= fgetc(ficInstr);
        }
    }
    while(carac != 10 && carac != EOF && carac != '#'){ /* Le caractere ASCII 13 est le saut de ligne*/
        
        tmp[i] = carac;
        i++;
        carac= fgetc(ficInstr);
    }
    if(carac == '#'){ // Cas où une ligne finit par un commentaire
        while(carac != 10 && carac != EOF){
            carac= fgetc(ficInstr);
        }
    }
    if(carac == EOF){  /*Pas de Else if car si on met un commentaire sur la derniere ligne ca va pas renvoyer 1*/
        result = 1;
    }
    tmp[i]='\0';
    if(i==0){  /* Si la ligne commence par un commentaire, on réappelle la fonction pour aller a la fin de la ligne et passer à la suivante */
        result = recupereInstr(ficInstr, tmp);
    }
    return result;
}


void lireInstruction(char* fichierInstr, char* fichierHex){
    FILE* ficInstr;
    FILE* ficHex;
    char instruction[33];
    char tmp_bin[33];
    char tmp_hexa[9];
    int i = 0;
    ficInstr = fopen(fichierInstr, "r");
    ficHex = fopen(fichierHex, "w+");
    remplir_struct();
    int nb_instructions = 0;

    if (ficInstr != NULL && ficHex != NULL){
        while(!(recupereInstr(ficInstr, instruction))){ /* On lit chaque ligne une par une jusqu'à la fin du fichier */
            mettreEnMajuscule(instruction);
            i=0;
            while(instruction[i]!=' '){
                tmp_bin[i]= instruction[i];
                i++;
            }
            printf("Instruction: %s\n", instruction);
            remplir_liste_instructions(instruction, nb_instructions);

            tmp_bin[i]='\0';
            i=0;
            while(!(comparerChaine(tmp_bin, tab_instruction[i].instr))){
                i++;
            }
            printf("Instruction: %s\n", tab_instruction[i].instr);
            binToHex(tmp_bin, tmp_hexa);
            fprintf(ficHex,"%s\n", tmp_hexa);
            nb_instructions++;
        }
        remplir_liste_instructions(instruction, nb_instructions);
        printf("Instruction: %s\n", instruction);
        printf("Instruction: %s\n", tab_instruction[i].instr);
        binToHex(tmp_bin, tmp_hexa);
        fprintf(ficHex,"%s\n", tmp_hexa);
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

int recherche_instr_dans_structure(char* nom_instr){
    int trouve = 0;
    int i = 0;
    while(!trouve){
        if(!comparerChaine(tab_instruction[i].instr, nom_instr)){
            i++;
        }
        else{
            trouve = 1;
        }
    }
    return i;
}

void remplir_liste_instructions(char* instruction, int instruction_actuelle){
    char nom_instr[8];
    int i = 0;
    while(instruction[i]!=' '){ /* Récupère le nom de l'instruction */
                nom_instr[i]= instruction[i];
                i++;
            }
    nom_instr[i] = '\0';
    i++;

    tab_liste_instructions[instruction_actuelle].instr = malloc(sizeof(char)*myStrlen(nom_instr));
    myStrcpy(tab_liste_instructions[instruction_actuelle].instr,nom_instr);
    tab_liste_instructions[instruction_actuelle].pos_instr_struct = recherche_instr_dans_structure(nom_instr);
    tab_liste_instructions[instruction_actuelle].nb_arg = tab_instruction[tab_liste_instructions[instruction_actuelle].pos_instr_struct].nb_arg;

    tab_liste_instructions[instruction_actuelle].arg = malloc(sizeof(char)*tab_liste_instructions[instruction_actuelle].nb_arg);
    tab_liste_instructions[instruction_actuelle].arg_en_str = malloc(sizeof(char)*(tab_liste_instructions[instruction_actuelle].nb_arg));

    char argument_char[10];
    int argument_int;
    int k;
    for(int j = 0; j < tab_liste_instructions[instruction_actuelle].nb_arg; j++){ /* Récupère les arguments */
        k = 0;
        while(instruction[i]!=' '){ 
                argument_char[k] = instruction[i];
                i++;
                k++;
            }
        argument_char[k] = '\0';
        i++;
        printf("Char: %s\n", argument_char);
        //intToStr(tab_liste_instructions[instruction_actuelle].arg_en_str[j], argument_int);
        //strcpy(tab_liste_instructions[instruction_actuelle].arg_en_str[0], argument_char);
        //myStrcpy(tab_liste_instructions[instruction_actuelle].arg_en_str[j], argument_char); 
        argument_int = valeurDecimale(argument_char);
        tab_liste_instructions[instruction_actuelle].arg[j] = argument_int;

        tab_liste_instructions[instruction_actuelle].arg_en_str[1] = 42;
        for(int k = 0; k < tab_liste_instructions[instruction_actuelle].nb_arg; k++){
            printf("Ca marche ! %d\n", tab_liste_instructions[instruction_actuelle].arg_en_str );
        }
        
        
        
        argument_char[0] = '\0';
        k = 0;
    }

    myStrcpy(tab_liste_instructions[instruction_actuelle].tab_bin, tab_instruction[tab_liste_instructions[instruction_actuelle].pos_instr_struct].tab_bin); /* Récupère le tableau binaire associé */

    int pos_instr; /* Transcrit l'instruction en binaire, puis en héxa */
    char arg_en_str[32];
    char arg_en_binaire[32];
        pos_instr = tab_liste_instructions[instruction_actuelle].pos_instr_struct;
        for(int j = 0; j < tab_liste_instructions[instruction_actuelle].nb_arg; j++){
            printf("%d\n", tab_liste_instructions[instruction_actuelle].arg[j]); /* Toute cette partie est "inutile": j'ai rajouté un champ dans la structure pour els arguments en str */
            intToStr(tab_liste_instructions[instruction_actuelle].arg[j], arg_en_str);
            printf("%s\n", arg_en_str);
            decToBin(arg_en_str, arg_en_binaire);
            copierChaineGaucheDroite(arg_en_binaire, tab_liste_instructions[instruction_actuelle].tab_bin, tab_instruction[pos_instr].pos_arg[2* j], tab_instruction[pos_instr].pos_arg[(2*j) + 1]);
        }
        printf("\n");
        binToHex(tab_liste_instructions[instruction_actuelle].tab_bin, tab_liste_instructions[instruction_actuelle].tab_hexa);
}



void verifier_structure_instruction(){ 
    printf("\n");
    for(int i = 0; i < 5; i++){
        printf("Nom d'instruction: %s\n", tab_liste_instructions[i].instr);
        printf("Position de l'instruction: %d\n", tab_liste_instructions[i].pos_instr_struct);
        printf("Nombre d'arguments: %d\n", tab_liste_instructions[i].nb_arg);
        for(int j = 0; j < tab_liste_instructions[i].nb_arg; j++){
            printf("Argument n°%d: %d\n", (j+1), tab_liste_instructions[i].arg[j]);
        }
        printf("Tableau binaire associé: %s\n", tab_liste_instructions[i].tab_bin);
        printf("Tableau hexadecimal associé: %s\n", tab_liste_instructions[i].tab_hexa);
        printf("\n-----------------\n");
    }
}

int compte_nb_instructions(char* fichierInstr){
    FILE* ficInstr = fopen(fichierInstr, "r");
    int nb_instructions = 0;
    int ligne_commentaire = 0;
    int nouvelle_ligne = 1;
    char carac = fgetc(ficInstr);

    if (ficInstr != NULL){
        while(carac != EOF){
            if(carac == '\n' || carac == EOF){
                if(ligne_commentaire == 0){
                    nb_instructions++;
                }
                ligne_commentaire = 0;
                nouvelle_ligne = 1;
            }
            else if(nouvelle_ligne == 1 && carac == '#'){
                ligne_commentaire = 1;
                nouvelle_ligne = 0;
            }
            else if(nouvelle_ligne == 1 && carac != '#'){
                nouvelle_ligne = 0;
            }
            carac = fgetc(ficInstr);
        }
        if(!ligne_commentaire){
            nb_instructions++;
        }
        fclose(ficInstr);
        return(nb_instructions);
    }
    else{
        printf("Problème d'ouverture du fichier.");
        return(-1);
    }
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
        printf("Problème d'ouverture du fichier test.");
        return(-1);
    }
}

