#include "fonction.h"

int main(int argc, char* argv[]){
  char test[10] = {'4','2', '0'};
  char test2[10];
  decToBin(test, test2);
  printf("%s", test2);
  lireInstruction("instr.txt", "result.txt");
  return 0;
}
