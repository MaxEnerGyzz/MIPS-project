#include "../headers/memoire.h"

long* initialiserMemoire(){
  long* memoire = malloc(sizeof(long) * (TAILLE_MEMOIRE));
  for(int i = 0; i < TAILLE_MEMOIRE; i++){
    memoire[i] = 0;
  }
  return memoire;
}

long* initialiserMemoire_instrs(){
  long* memoire_instr = malloc(sizeof(long) * (TAILLE_MEMOIRE_INSTR));
  for(int i = 0; i < TAILLE_MEMOIRE_INSTR; i++){
    memoire_instr[i] = 0;
  }
  return memoire_instr;
}

void remplirMemProg(long* memoire_instr, char* instruction_hex, int nb_instr_actuelle){
  memoire_instr[nb_instr_actuelle] = valeurDecimale(instruction_hex);
}

void modifierElmtMem(long* memoire, long valeur, int position){
  memoire[position] = valeur;
}

long recupererElmtMem(long* memoire, int position){
  return(memoire[position]);
}
