#include "../headers/instructions.h"
#include "../headers/memoire.h"

void mode_non_interactif(liste_instructions* tab_liste_instructions_val, registre* tab_registre, int nb_instructions_val_entrees, long* memoire){
	int i = 0;
	int instruction_actuelle = 0;
	int PC_modif = 0; /* 1 si l'instruction executee modifie le PC, 0 sinon */

	while(instruction_actuelle < nb_instructions_val_entrees){
		PC_modif = execute_instruction(tab_liste_instructions_val, tab_registre, instruction_actuelle, i, memoire);

		if(PC_modif){
			/* On verra comment on implémente le changement de PC */
		}
		else{
			instruction_actuelle++;
			modifieRegistreParValeur((charbinToDec(tab_registre[32].tab_bin) + 1) * 32, "PC", tab_registre); /* Incrémente le PC de 4 octets, soit 32 bits */
		}
	}
}

int execute_instruction(liste_instructions* tab_liste_instructions_val, registre* tab_registre, int instruction_actuelle, int i, long *memoire){
	int PC_modif = 0;
	switch(tab_liste_instructions_val[instruction_actuelle].pos_instr_struct){
			case 0:
				instruction_ADD(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2], tab_registre);
				i++;
				break;
			case 1:
				instruction_ADDI(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2], tab_registre);
				i++;
				break;
			case 2:
				instruction_AND(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2], tab_registre);
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
				instruction_DIV(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_registre);
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
				instruction_LUI(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_registre);
				i++;
				break;
			case 12:
				instruction_LW(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2], tab_registre, memoire); /* Arguments bizarres*/
				i++;
				break;
			case 13:
				instruction_MFHI(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_registre);
				i++;
				break;
			case 14:
				instruction_MFLO(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_registre);
				i++;
				break;
			case 15:
				instruction_MULT(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_registre);
				i++;
				break;
			case 16:
				instruction_NOP();
				i++;
				break;
			case 17:
				instruction_OR(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2], tab_registre);
				i++;
				break;
			case 18:
				instruction_ROTR(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2], tab_registre);
				i++;
				break;
			case 19:
				instruction_SLL(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2], tab_registre);
				i++;
				break;
			case 20:
				instruction_SLT(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2]);
				i++;
				break;
			case 21:
				instruction_SRL(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2], tab_registre);
				i++;
				break;
			case 22:
				instruction_SUB(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2], tab_registre);
				i++;
				break;
			case 23:
				instruction_SW(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2], tab_registre, memoire); /* Arguments bizarres */
				i++;
				break;
			case 24:
				instruction_SYSCALL();
				i++;
				break;
			case 25:
				instruction_XOR(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2], tab_registre);
				i++;
				break;
			default:
				printf("Erreur: Cette instruction n'est pas encore implémentée. (cette erreur n'est pas censee se produire ^^)");
		}
		return PC_modif;
}

void instruction_ADD(int rd, int rs, int rt, registre* tab_registre){
	int rs_val = binToDec(valeurDecimale(tab_registre[rs].tab_bin));
	int rt_val = binToDec(valeurDecimale(tab_registre[rt].tab_bin));

	if(rs_val + rt_val > 4294967296){
		printf("SignalException(IntegerOverflow)");
	}
	else{
		modifieRegistreParValeur(rs_val + rt_val, tab_registre[rd].nom, tab_registre);
	}
}

void instruction_ADDI(int rd, int rs, int imm, registre* tab_registre){
	int rs_val = binToDec(valeurDecimale(tab_registre[rs].tab_bin));

	if(rs_val + imm > 4294967296){
		printf("SignalException(IntegerOverflow)");
	}
	else{
		modifieRegistreParValeur(rs_val + imm, tab_registre[rd].nom, tab_registre);
	}
}

void instruction_AND(int rd, int rs, int rt, registre* tab_registre){
	int rs_val = binToDec(valeurDecimale(tab_registre[rs].tab_bin));
	int rt_val = binToDec(valeurDecimale(tab_registre[rt].tab_bin));

	modifieRegistreParValeur(rs_val & rt_val, tab_registre[rd].nom, tab_registre);
}

void instruction_BEQ(int rs, int rt, int offset){

}

void instruction_BGTZ(int rs, int offset){

}

void instruction_BLEZ(int rs, int offset){

}

void instruction_BNE(int rs, int rt, int offset){

}

void instruction_DIV(int rs, int rt, registre* tab_registre){
	int rs_val = binToDec(valeurDecimale(tab_registre[rs].tab_bin));
	int rt_val = binToDec(valeurDecimale(tab_registre[rt].tab_bin));

	modifieRegistreParValeur(rs_val / rt_val, "HI", tab_registre);
	modifieRegistreParValeur(rs_val % rt_val, "LO", tab_registre);
}

void instruction_J(int target){

}

void instruction_JAL(int target){

}

void instruction_JR(int rs){

}

void instruction_LUI(int rd, int imm, registre* tab_registre){
	modifieRegistreParValeur(imm * 65536, tab_registre[rd].nom, tab_registre);
}

void instruction_LW(int rt, int offset, int base, registre* tab_registre, long* memoire){
	/*char valeur_bin[33];
	decToBin(valeurDecimale(memoire[offset + base]), valeur_bin);
	myStrcpy(tab_registre[rt].tab_bin, valeur_bin);*/
}

void instruction_MFHI(int rd, registre* tab_registre){
	modifieRegistreParValeur(binToDec(valeurDecimale(tab_registre[33].tab_bin)), tab_registre[rd].nom, tab_registre);
}

void instruction_MFLO(int rd, registre* tab_registre){
	modifieRegistreParValeur(binToDec(valeurDecimale(tab_registre[34].tab_bin)), tab_registre[rd].nom, tab_registre);
}

void instruction_MULT(int rs, int rt, registre* tab_registre){
	int rs_val = binToDec(valeurDecimale(tab_registre[rs].tab_bin));
	int rt_val = binToDec(valeurDecimale(tab_registre[rt].tab_bin));
	int mul = rs_val * rt_val;
 	int mul_haut = mul & 18446744069414584320lu;
	int mul_bas = mul & 4294967295;


	modifieRegistreParValeur(mul_haut, "HI", tab_registre);
	modifieRegistreParValeur(mul_bas, "LO", tab_registre);
}

void instruction_NOP(){

}

void instruction_OR(int rd, int rs, int rt, registre* tab_registre){
	int rs_val = binToDec(valeurDecimale(tab_registre[rs].tab_bin));
	int rt_val = binToDec(valeurDecimale(tab_registre[rt].tab_bin));

	modifieRegistreParValeur(rs_val | rt_val, tab_registre[rd].nom, tab_registre);
}

void instruction_ROTR(int rd, int rt, int sa, registre* tab_registre){
	char rt_gauche[16];
	char rt_droite[16];
	int result;

	copierChaineGaucheDroite(tab_registre[rt].tab_bin, rt_gauche, 0, 31 - sa);
	copierChaineGaucheDroite(tab_registre[rt].tab_bin, rt_gauche, 31 - sa + 1, 31);
	result = binToDec(valeurDecimale(rt_gauche)) & binToDec(valeurDecimale(rt_droite));

	modifieRegistreParValeur(result, tab_registre[rd].nom, tab_registre);
}

void instruction_SLL(int rd, int rt, int sa, registre* tab_registre){
	int temp = binToDec(valeurDecimale(tab_registre[rt].tab_bin)) * myPower2(sa);
	modifieRegistreParValeur(0, tab_registre[rd].nom, tab_registre);
	modifieRegistreParValeur(temp, tab_registre[rd].nom, tab_registre);
}

void instruction_SLT(int rd, int rs, int rt){

}

void instruction_SRL(int rd, int rt, int sa, registre* tab_registre){
	int temp = binToDec(valeurDecimale(tab_registre[rt].tab_bin)) / myPower2(sa);
	resetRegistre(tab_registre[rd].nom, tab_registre);
	modifieRegistreParValeur(temp, tab_registre[rd].nom, tab_registre);
}

void instruction_SUB(int rd, int rs, int rt, registre* tab_registre){
	int rs_val = binToDec(valeurDecimale(tab_registre[rs].tab_bin));
	int rt_val = binToDec(valeurDecimale(tab_registre[rt].tab_bin));
	if(rs_val >= rt_val){
		modifieRegistreParValeur(rs_val - rt_val, tab_registre[rd].nom, tab_registre);
	}
	else{
		printf("Les entiers signes ne sont pas encore pris en compte;");
	}

}

void instruction_SW(int rt, int offset, int base, registre* tab_registre, long* memoire){
		/*long valeur = binToDec(valeurDecimale(tab_registre[rt].tab_bin));
		int position = base + offset;
		modifierElmtMem(memoire, valeur, position);*/
}

void instruction_SYSCALL(){
	printf("SignalException(SystemCall)");
}

void instruction_XOR(int rd, int rs, int rt, registre* tab_registre){
	int rs_val = binToDec(valeurDecimale(tab_registre[rs].tab_bin));
	int rt_val = binToDec(valeurDecimale(tab_registre[rt].tab_bin));

	modifieRegistreParValeur(rs_val ^ rt_val, tab_registre[rd].nom, tab_registre);
}
