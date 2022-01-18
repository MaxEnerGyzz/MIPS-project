#include "../headers/instructions.h"
#include "../headers/memoire.h"

int execute_instruction(liste_instructions* tab_liste_instructions_val, registre* tab_registre, int instruction_actuelle, unsigned char* memoire){
	int PC_modif = 0;
	switch(tab_liste_instructions_val[instruction_actuelle].pos_instr_struct){
			case 0:
				instruction_ADD(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2], tab_registre);
				break;
			case 1:
				instruction_ADDI(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2], tab_registre);
				break;
			case 2:
				instruction_AND(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2], tab_registre);
				
				break;
			case 3:
				instruction_BEQ(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2]);
				PC_modif = 1;
				break;
			case 4:
				instruction_BGTZ(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1]);
				PC_modif = 1;
				break;
			case 5:
				instruction_BLEZ(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1]);
				PC_modif = 1;
				break;
			case 6:
				instruction_BNE(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2]);
				PC_modif = 1;
				break;
			case 7:
				instruction_DIV(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_registre);
				break;
			case 8:
				instruction_J(tab_liste_instructions_val[instruction_actuelle].arg[0]);
				PC_modif = 1;
				break;
			case 9:
				instruction_JAL(tab_liste_instructions_val[instruction_actuelle].arg[0]);
				PC_modif = 1;
				break;
			case 10:
				instruction_JR(tab_liste_instructions_val[instruction_actuelle].arg[0]);
				PC_modif = 1;
				break;
			case 11:
				instruction_LUI(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_registre);
				break;
			case 12:
				instruction_LW(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2], tab_registre, memoire); /* Arguments bizarres*/
				break;
			case 13:
				instruction_MFHI(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_registre);
				break;
			case 14:
				instruction_MFLO(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_registre);
				break;
			case 15:
				instruction_MULT(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_registre);
				break;
			case 16:
				instruction_NOP();
				break;
			case 17:
				instruction_OR(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2], tab_registre);
				break;
			case 18:
				instruction_ROTR(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2], tab_registre);
				break;
			case 19:
				instruction_SLL(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2], tab_registre);
				break;
			case 20:
				instruction_SLT(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2]);
				break;
			case 21:
				instruction_SRL(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2], tab_registre);
				break;
			case 22:
				instruction_SUB(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2], tab_registre);
				break;
			case 23:
				instruction_SW(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2], tab_registre, memoire);
				break;
			case 24:
				instruction_SYSCALL();
				break;
			case 25:
				instruction_XOR(tab_liste_instructions_val[instruction_actuelle].arg[0], tab_liste_instructions_val[instruction_actuelle].arg[1], tab_liste_instructions_val[instruction_actuelle].arg[2], tab_registre);
				break;
			default:
				printf("Erreur: Cette instruction n'est pas encore implémentée. (cette erreur n'est pas censee se produire ^^)");
		}
		return PC_modif;
}

void instruction_ADD(int rd, int rs, int rt, registre* tab_registre){
	int rs_val = binToDec(valeurDecimale(tab_registre[rs].tab_bin));
	int rt_val = binToDec(valeurDecimale(tab_registre[rt].tab_bin));
    /*
	if(rs_val + rt_val > 4294967296){
		printf("SignalException(IntegerOverflow)");
	}
	else{*/
		modifieRegistreParValeur(rs_val + rt_val, tab_registre[rd].nom, tab_registre);
	/*}*/
}

void instruction_ADDI(int rd, int rs, int imm, registre* tab_registre){
	int rs_val = binToDec(valeurDecimale(tab_registre[rs].tab_bin));
    /*
    if(rs_val + rt_val > 4294967296){
        printf("SignalException(IntegerOverflow)");
    }
    else{*/
        modifieRegistreParValeur(rs_val + imm, tab_registre[rd].nom, tab_registre);
    /*}*/
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

	if(rt_val == 0){
		printf("DIVISION PAR ZERO: INSTRUCTION ANNULEE !!!\n");
	}
	else{
		modifieRegistreParValeur(rs_val / rt_val, "HI", tab_registre);
		modifieRegistreParValeur(rs_val % rt_val, "LO", tab_registre);
	}

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

void instruction_LW(int rt, int offset, int base, registre* tab_registre, unsigned char* memoire){
    int i=0, j=0,unit=0, position = (charbinToDec(tab_registre[base].tab_bin))*4 + offset;
    unsigned char tmp[4];
    char bin[9];
    for(i=0; i<=3; i++){
        tmp[i] = memoire[position+i];
        for(j=0;j<8;j++){
            bin[j]='0';
        }
        j=0;
        while(tmp[i]!=0){
          unit = tmp[i]%2;
          tmp[i] = (tmp[i]-unit)/2;
          bin[7-j] = unit+48;
          j++;
        }
        bin[8]='\0';
        myStrcpy(&tab_registre[rt].tab_bin[i*8], bin);
    }
    tab_registre[rt].tab_bin[32]='\0';   
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
    char res[33];
    int i= 0;
    for(i=0;i<=31-sa;i++){
        res[sa+i]=tab_registre[rt].tab_bin[i];
    }
    for(i=31-sa+1;i<=31;i++){
        res[i-(31-sa+1)]=tab_registre[rt].tab_bin[i];
    }
    res[32]='\0';
    for(i=0;i<=32;i++){
        tab_registre[rd].tab_bin[i]=res[i];
    }
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

void instruction_SW(int rt, int offset, int base, registre* tab_registre, unsigned char* memoire){
    unsigned char valeur =0;
    int i=0, j=0, position = (charbinToDec(tab_registre[base].tab_bin))*4 + offset;
    for(i=0; i<=3; i++){
        valeur = 0;
        for(j=0;j<=7;j++){
            valeur = (2 * valeur + (tab_registre[rt].tab_bin[i*8+j]-'0'));
        }
        memoire[position+i]=valeur;
    }
}

void instruction_SYSCALL(){
	printf("SignalException(SystemCall)");
}

void instruction_XOR(int rd, int rs, int rt, registre* tab_registre){
	int rs_val = binToDec(valeurDecimale(tab_registre[rs].tab_bin));
	int rt_val = binToDec(valeurDecimale(tab_registre[rt].tab_bin));

	modifieRegistreParValeur(rs_val ^ rt_val, tab_registre[rd].nom, tab_registre);
}
