#include "../headers/memoire.h"

unsigned char* initialiserMemoire(){
  unsigned char* memoire = malloc(sizeof(unsigned char) * (TAILLE_MEMOIRE));
  for(int i = 0; i < TAILLE_MEMOIRE; i++){
    memoire[i] = 0;
  }
  return memoire;
}

unsigned char* initialiserMemoire_instr(){
  unsigned char* memoire_instr = malloc(sizeof(unsigned char) * (TAILLE_MEMOIRE_INSTR));
  for(int i = 0; i < TAILLE_MEMOIRE_INSTR; i++){
    memoire_instr[i] = 0;
  }
  return memoire_instr;
}

void remplirMemProg(unsigned char* memoire_instr, unsigned char* instruction_hex, int nb_instr_actuelle){
    int i=0;
    for(i=nb_instr_actuelle*8; i<=(nb_instr_actuelle*8+8); i++){
        memoire_instr[i]=instruction_hex[i-nb_instr_actuelle*8];
    }
}


void modifierElmtMem(unsigned char* memoire, unsigned char valeur, int position){
  memoire[position] = valeur;
}

long recupererElmtMem(unsigned char* memoire, int position){
  return(memoire[position]);
}
