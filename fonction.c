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
  int i =0, unit=0, tmp=0;
  char* result;
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


void instructionToHex(FILE* ficInstr, FILE* ficHex, char* instruction, char* tab_instr, char* tab_bin, char* tab_hex, char *tab_tmp){
  printf("Instruction actuelle: %s\n", instruction);
  int i = 0, tmp = 0;
  char tab_op[9]; // Opérande en décimal
  char tab_op_bin[9]; // Opérande en binaire
  char tab_op_bin_tmp[9];
  char carac;
  tab_bin[32]= '\0';
  tab_hex[8]= '\0';
  for(i = 0; i <= 31; i++){
    tab_bin[i] = '0';
  }
  if(comparerChaine(tab_instr, "ADD")){/*
    tab_bin[26] = '1';
    // On va lire successivement rs rt et rd
    for(i = 0; i<3;i++){
      while(carac != ' '){ // On lit l'instruction
        tab_tmp[tmp]= carac;
        carac = fgetc(ficInstr);
        tmp++;
      }
      tab_tmp[tmp] = '\0';
      decToBin(tab_tmp, tab_tmp);
      if(myStrlen(tab_tmp)<=5){
        copierChaine(tab_tmp, tab_bin, (i+1)*5+1);
      }
    }
    tmp=0;
    binToHex(tab_bin, tab_hex);
    fprintf(ficHex, "%s\n", tab_bin);*/
    printf("C'est le ADD.\n");
  }
  else if(comparerChaine(tab_instr, "ADDI")){
    tab_bin[2] = '1';
    i = 0;
    while(instruction[i] != ' '){ // On passe l'instruction
      i++;
    }

    i++;
    tmp = 0;
    while(instruction[i] != ' '){ // Opérande rs
      tab_op[tmp] = instruction[i];
      tmp++;
      i++;
    }
    tab_op[tmp] = '\0';

    decToBin(tab_op, tab_op_bin);
    retournerMot(tab_op_bin);
    copierChaine(tab_op_bin, tab_bin, 6);
    printf("chaine: %s\n",tab_bin);

    i++;
    tmp = 0;
    for(int j = 0; j < myStrlen(tab_op); j++){
      tab_op[j] = '0';
    }

    while(instruction[i] != ' '){ // Opérande rt
      tab_op[tmp] = instruction[i];
      tmp++;
      i++;
    }
    tab_op[tmp] = '\0';
    decToBin(tab_op, tab_op_bin);
    retournerMot(tab_op_bin);
    copierChaine(tab_op_bin, tab_bin, 11);
    printf("chaine: %s\n",tab_bin);

    i++;
    tmp = 0;
    for(int j = 0; j < myStrlen(tab_op); j++){
      tab_op[j] = '0';
    }

    while(instruction[i] != '\n'){ // Opérande immediate
      tab_op[tmp] = instruction[i];
      tmp++;
      i++;
    }
    tab_op[tmp] = '\0';
    decToBin(tab_op, tab_op_bin);
    char tab_op_bin_inverse[17];
    retournerMot(tab_op_bin);
    copierChaine(tab_op_bin, tab_bin, 16);
    printf("chaine: %s\n",tab_bin);

    binToHex(tab_bin, tab_hex);
    printf("Code hexa: %s\n", tab_hex);
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
}





void lireInstruction(char* fichierInstr, char* fichierHex){
  FILE* ficInstr;
  FILE* ficHex;
  int i = 0, tmp=0;
  char tab_instr[8]; /* Contient le nom de l'instruction */
  char tab_bin[33]; /* On rentre les bits dans le tableau puis on traduit le tab en hexa */
  char tab_hex[9]; /* Contient l'instruction en hexadecimal */
  char tab_tmp[26]; /* Contient les registres codés au maximum sur 26 bits*/
  char instruction[50]; // Contient l'instruction en entier
  ficInstr = fopen(fichierInstr, "r");
  ficHex = fopen(fichierHex, "w+");

  if (ficInstr != NULL && ficHex != NULL){
    printf("Le fichier s'est ouvert correctement.\n");

    while(fgets(instruction, 50, ficInstr) != NULL){ // On lit chaque ligne jusqu'à la fin du fichier
      i = 0;
      while(instruction[i] != ' '){ // Récupération de l'instruction
        tab_instr[i] = instruction[i];
        i++;
      }
      tab_instr[i] = '\0';
      mettreEnMajuscule(tab_instr);

      printf("Instruction: %s\n", tab_instr);

      instructionToHex(ficInstr, ficHex, instruction, tab_instr, tab_bin, tab_hex, tab_tmp);

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
