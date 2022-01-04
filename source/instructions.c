#include "../headers/instructions.h"

void mode_non_interactif(liste_instructions* tab_liste_instructions_val, registre* tab_registre, int nb_instructions_val_entrees){
	int i = 0;
	int instruction_actuelle = 0;
	int PC_modif = 0; /* 1 si l'instruction executee modifie le PC, 0 sinon */

	while(instruction_actuelle < nb_instructions_val_entrees){
		PC_modif = execute_instruction(tab_liste_instructions_val, tab_registre, instruction_actuelle, i);

		if(PC_modif){
			/* On verra comment on implémente le changement de PC */
		}
		else{
			instruction_actuelle++;
			modifieRegistreParValeur(instruction_actuelle * 32, "PC", tab_registre); /* Incrémente le PC de 4 octets, soit 32 bits */
		}
	}
}

int execute_instruction(liste_instructions* tab_liste_instructions_val, registre* tab_registre, int instruction_actuelle, int i){
	int PC_modif = 0;
	printf("%d\n", tab_liste_instructions_val[instruction_actuelle].pos_instr_struct);
	switch(tab_liste_instructions_val[instruction_actuelle].pos_instr_struct){
			case 0:
				instruction_ADD(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2]);
				i++;
				break;
			case 1:
				instruction_ADDI(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2]);
				i++;
				break;
			case 2:
				instruction_AND(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2]);
				i++;
				break;
			case 3:
				instruction_BEQ(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2]);
				i++;
				PC_modif = 1;
				break;
			case 4:
				instruction_BGTZ(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1]);
				i++;
				PC_modif = 1;
				break;
			case 5:
				instruction_BLEZ(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1]);
				i++;
				PC_modif = 1;
				break;
			case 6:
				instruction_BNE(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2]);
				i++;
				PC_modif = 1;
				break;
			case 7:
				instruction_DIV(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1]);
				i++;
				break;
			case 8:
				instruction_J(tab_liste_instructions_val[instruction_actuelle].arg[0]);
				i++;
				PC_modif = 1;
				break;
			case 9:
				instruction_JAL(tab_liste_instructions_val[instruction_actuelle].arg[0]);
				i++;
				PC_modif = 1;
				break;
			case 10:
				instruction_JR(tab_liste_instructions_val[instruction_actuelle].arg[0]);
				i++;
				PC_modif = 1;
				break;
			case 11:
				instruction_LUI(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1]);
				i++;
				break;
			case 12:
				instruction_LW(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2]); /* Arguments bizarres*/
				i++;
				break;
			case 13:
				instruction_MFHI(tab_liste_instructions_val[instruction_actuelle].arg[0]);
				i++;
				break;
			case 14:
				instruction_MFLO(tab_liste_instructions_val[instruction_actuelle].arg[0]);
				i++;
				break;
			case 15:
				instruction_MULT(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1]);
				i++;
				break;
			case 16:
				instruction_NOP();
				i++;
				break;
			case 17:
				instruction_OR(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2]);
				i++;
				break;
			case 18:
				instruction_ROTR(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2]);
				i++;
				break;
			case 19:
				instruction_SLL(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2]);
				i++;
				break;
			case 20:
				instruction_SLT(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2]);
				i++;
				break;
			case 21:
				instruction_SRL(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2]);
				i++;
				break;
			case 22:
				instruction_SUB(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2]);
				i++;
				break;
			case 23:
				instruction_SW(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2]); /* Arguments bizarres */
				i++;
				break;
			case 24:
				instruction_SYSCALL();
				i++;
				break;
			case 25:
				instruction_XOR(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2]);
				i++;
				break;
			default:
				printf("Erreur: Cette instruction n'est pas encore implémentée. (cette erreur n'est pas censee se produire ^^)");
		}
		return PC_modif;
}

void instruction_ADD(int rd, int rs, int rt){
	int rs_val = binToDec("101");
	printf("Val: %d", rs_val);
}

void instruction_ADDI(int rd, int rs, int imm){

}

void instruction_AND(int rd, int rs, int rt){

}

void instruction_BEQ(int rs, int rt, int offset){

}

void instruction_BGTZ(int rs, int offset){

}

void instruction_BLEZ(int rs, int offset){

}

void instruction_BNE(int rs, int rt, int offset){

}

void instruction_DIV(int rs, int rt){

}

void instruction_J(int target){

}

void instruction_JAL(int target){

}

void instruction_JR(int rs){

}

void instruction_LUI(int rd, int imm){

}

void instruction_LW(int rt, int offset, int base){
	
}

void instruction_MFHI(int rd){
	
}

void instruction_MFLO(int rd){
	
}

void instruction_MULT(int rs, int rt){
	
}

void instruction_NOP(){
	
}

void instruction_OR(int rd, int rs, int rt){

}

void instruction_ROTR(int rd, int rs, int rt){

}

void instruction_SLL(int rd, int rs, int sa){

}

void instruction_SLT(int rd, int rs, int rt){

}

void instruction_SRL(int rd, int rt, int sa){

}

void instruction_SUB(int rd, int rs, int st){

}

void instruction_SW(int rt, int offset, int base){

}

void instruction_SYSCALL(){
	
}

void instruction_XOR(int rd, int rs, int rt){

}