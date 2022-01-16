#include "../headers/registre.h"


void remplir_struc_registre(registre* tab_registre){
	int i = 0, j = 0;

	/* ZERO */
	tab_registre[j].nom = malloc(sizeof(char)*5);
	myStrcpy(tab_registre[j].nom, "ZERO");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 1;

	/* AT */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "AT");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 1;

	/* V0 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "V0");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 0;

	/* V1 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "V1");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 0;

	/* A0 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "A0");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 0;

	/* A1 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "A1");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 0;

	/* A2 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "A2");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 0;

	/* A3 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "A3");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 0;

	/* T0 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "T0");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 0;

	/* T1 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "T1");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 0;

	/* T2 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "T2");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 0;

	/* T3 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "T3");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 0;

	/* T4 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "T4");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 0;

	/* T5 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "T5");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 0;

	/* T6 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "T6");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 0;

	/* T7 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "T7");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 0;

	/* S0 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "S0");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 0;

	/* S1 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "S1");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 0;

	/* S2 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "S2");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 0;

	/* S3 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "S3");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 0;

	/* S4 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "S4");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 0;

	/* S5 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "S5");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 0;

	/* S6 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "S6");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 0;

	/* S7 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "S7");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 0;

	/* T8 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "T8");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 0;

	/* T9 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "T9");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 0;

	/* K0 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "K0");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 1;

	/* K1 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "K1");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 1;

	/* GP */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "GP");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 1;

	/* SP */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "SP");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 0;

	/* FP */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "FP");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 1;

	/* RA */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "RA");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 0;

	/* PC --> Program Counter (Adresse de la prochaine instruction)*/
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "PC");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 1;

	/* HI --> Stocke le résultat de la multiplication / division*/
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "HI");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 1;

	/* LO --> Stocke le résultat de la multiplication / division*/
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "LO");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = '0';
	}
	tab_registre[j].reg_protege = 1;
}

void verifier_structure_registre(registre* tab_registre){
	int i = 0, j = 0;
	printf("----------------------------------------------------------\n");
	for(i = 0; i < NB_REGISTRES + 1; i++){
		printf("Registre: %s\n", tab_registre[i].nom);
		printf("Valeur actuelle du registre: ");
		for(j = 0; j < 33; j++){
			printf("%c", tab_registre[i].tab_bin[j]);
		}
		printf("\nRegistre protege ? ");
		if(tab_registre[i].reg_protege == 1){
			printf("OUI\n");
		}
		else{
			printf("NON\n");
		}
		printf("----------------------------------------------------------\n");
	}
}

int estUnRegistre(char* operande, registre* tab_registre){
    int reg=-1, i=0;
    for(i=0; i< NB_REGISTRES + 1 ;i++){
        if(comparerChaine(tab_registre[i].nom, operande)){
            reg=i + 1;
        }
    }
    if(reg == -1){
        printf("\nERREUR : %s n'est pas un registre.\n", operande);
    }
    return reg;
}

int estUnRegistreProtege(char* operande, registre* tab_registre){
    int reg = 0, i = 0;
    for(i=0; i<NB_REGISTRES ;i++){
        if(comparerChaine(tab_registre[i].nom, operande) && tab_registre[i].reg_protege == 1){
            reg=1;
        }
    }
    return reg;
}

void modifieRegistreParValeur(int valeur, char* registre_nom, registre *tab_registre){
	int numRegistre = estUnRegistre(registre_nom, tab_registre) - 1;
	char valeurStr[30];
	intToStr(valeur, valeurStr);
	char valeurBin[33];
	decToBin(valeurStr, valeurBin);
	copierChaineDroite(valeurBin, tab_registre[numRegistre].tab_bin);
}

void resetRegistre(char* registre_nom, registre *tab_registre){
	int numRegistre = estUnRegistre(registre_nom, tab_registre) - 1;
	myStrcpy(tab_registre[numRegistre].tab_bin, "00000000000000000000000000000000");
}


void afficher_registres(registre* tab_registre){
	char valeur_hex[9];
	int i = 0;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$zero: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$at: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$v0: %s\n", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$v1: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$a0: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$a1: %s\n", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$a2: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$a3: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$t0: %s\n", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$t1: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$t2: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$t3: %s\n", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$t4: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$t5: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$t6: %s\n", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$t7: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$s0: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$s1: %s\n", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$s2: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$s3: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$s4: %s\n", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$s5: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$s6: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$s7: %s\n", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$t8: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$t9: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$k0: %s\n", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$k1: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$gp: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$sp: %s\n", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$fp: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$ra: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$pc: %s   \n", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$hi: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	printf("$l0: %s   \n", valeur_hex);
	i++;

}

void ecrire_registres_fichier(registre* tab_registre, char* nom_fichier){
	char valeur_hex[9];
	FILE* fichier = fopen(nom_fichier, "w+");
	int i = 0;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$zero: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$at: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$v0: %s\n", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$v1: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$a0: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$a1: %s\n", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$a2: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$a3: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$t0: %s\n", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$t1: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$t2: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$t3: %s\n", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$t4: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$t5: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$t6: %s\n", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$t7: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$s0: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$s1: %s\n", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$s2: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$s3: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$s4: %s\n", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$s5: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$s6: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$s7: %s\n", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$t8: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$t9: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$k0: %s\n", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$k1: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$gp: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$sp: %s\n", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$fp: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$ra: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$pc: %s   \n", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$hi: %s   ", valeur_hex);
	i++;

	binToHex(tab_registre[i].tab_bin, valeur_hex);
	fprintf(fichier, "$l0: %s   \n", valeur_hex);
	i++;

}
