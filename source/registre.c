#include <stdlib.h>
#include <stdio.h>

#include "../headers/registre.h"
#include "../headers/fonction_str.h"

void remplir_struc_registre(registre* tab_registre){
	int i = 0, j = 0;

	/* ZERO */
	tab_registre[j].nom = malloc(sizeof(char)*5);
	myStrcpy(tab_registre[j].nom, "ZERO");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 1;

	/* AT */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "AT");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 1;

	/* V0 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "V0");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 0;

	/* V1 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "V1");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 0;

	/* A0 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "A0");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 0;

	/* A1 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "A1");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 0;

	/* A2 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "A2");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 0;

	/* A3 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "A3");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 0;

	/* T0 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "T0");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 0;

	/* T1 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "T1");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 0;

	/* T2 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "T2");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 0;

	/* T3 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "T3");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 0;

	/* T4 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "T4");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 0;

	/* T5 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "T5");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 0;

	/* T6 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "T6");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 0;

	/* T7 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "T7");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 0;

	/* S0 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "S0");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 0;

	/* S1 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "S1");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 0;

	/* S2 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "S2");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 0;

	/* S3 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "S3");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 0;

	/* S4 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "S4");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 0;

	/* S5 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "S5");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 0;

	/* S6 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "S6");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 0;

	/* S7 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "S7");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 0;

	/* T8 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "T8");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 0;

	/* T9 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "T9");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 0;

	/* K0 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "K0");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 1;

	/* K1 */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "K1");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 1;

	/* GP */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "GP");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 1;

	/* SP */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "SP");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 0;

	/* FP */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "FP");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 1;

	/* RA */
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "RA");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 0;

	/* PC --> Program Counter (Adresse de l'instruction actuelle)*/
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "PC");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 1;

	/* HI --> Stocke le résultat de la multiplication / division*/
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "HI");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
	}
	tab_registre[j].reg_protege = 1;

	/* LO --> Stocke le résultat de la multiplication / division*/
	j++;
	tab_registre[j].nom = malloc(sizeof(char)*3);
	myStrcpy(tab_registre[j].nom, "LO");
	tab_registre[j].id = j;
	for(i = 0; i < 33; i++){
		tab_registre[j].tab_bin[i] = 0;
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
			printf("%d", tab_registre[i].tab_bin[j]);
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
    for(i=0; i< NB_REGISTRES ;i++){
        if(comparerChaine(tab_registre[i].nom, operande)){
            reg=i+1;
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
