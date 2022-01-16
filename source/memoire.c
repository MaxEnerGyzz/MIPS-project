#include "../headers/memoire.h"

long* initialiserMemoire(){
  long* memoire = malloc(sizeof(long) * (TAILLE_MEMOIRE + TAILLE_MEMOIRE_INSTR + 1));
  memoire[0] = 0; /* Le premier element du tableau memoire indique combien d'instructions sont stockes dans la memoire */
  return memoire;
}

void remplirMemProg(long* memoire, liste_instructions* tab_liste_instructions_val, int nb_instr){
  memoire[0] = nb_instr;
  for(int i = 1; i < nb_instr; i++){
    memoire[i] = valeurDecimale(tab_liste_instructions_val[i].tab_hexa);
  }
}

void remplirMemProg_une_instruction(long* memoire, char* instruction_hex){
  memoire[memoire[0]] = valeurDecimale(instruction_hex);
  memoire[0]++; // On incremente le nombre d'instructions stockees en memoire;
}

void modifierElmtMem(long* memoire, long valeur, int position){
  memoire[position + TAILLE_MEMOIRE_INSTR + 1] = valeur;
}

long recupererElmtMem(long* memoire, int position){
  return(memoire[position + TAILLE_MEMOIRE_INSTR + 1]);
}
