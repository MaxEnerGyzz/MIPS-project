#include "../headers/fonction_str.h"
#include "../headers/fonction.h"


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
    char *res;
    n = myStrlen(mot);
    res=malloc(sizeof(char)*(n+1));
  
    for (i=0; i<n; i++){
        res[i] = mot[n-1-i];
    }
    res[i] = '\0';
    myStrcpy(mot,res);
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
  //retournerMot(strBin);
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

int binToDec(char *strBin){
    int dec, decimal_val = 0, base = 1, rem;  
    int num = valeurDecimale(strBin);
    //printf("%s Bin en dec: %d\n", strBin, bin);
        while (num > 0)

    {

        rem = num % 10;

        decimal_val = decimal_val + rem * base;

        num = num / 10 ;

        base = base * 2;

    }
  return num;
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
void copierChaineGaucheDroite(const char* tab_tmp, char *tab_bin, int posG, int posD){
    int index1 = posG, index2 = posD, taille = myStrlen(tab_tmp), index3 = 0;
    while(index1 < index2 + 1 && index3 < taille){
        tab_bin[index2] = tab_tmp[index3];
        index2--;
        index3++;
    }
}

void copierChaineDroite(const char* tab_tmp, char *tab_bin){
    int taille = myStrlen(tab_tmp);
    int j = 0;
    for(int i = 32; i > 32 - taille; i--){
        tab_bin[i] = tab_tmp[j];
        j++;
    }
}

int estUnInt(char *str){
    int result = 1, i=0, taille = myStrlen(str);
    for(i=0; i<taille; i++){
        if(str[i] < 48 || str[i] > 57){
            result = 0;
        }
    }
    return result;
}

int myPower2(int value){
    int result = 1;
    for(int i = 0; i < value; i++){
        result = result * 2;
    }
    return result;
}

