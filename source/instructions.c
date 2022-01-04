

void mode_non_interactif(liste_instructions* tab_liste_instructions_val, registre* tab_registre, int nb_instructions_val_entrees){
	int instruction_actuelle = 0;

	while(instruction_actuelle < nb_instructions_val_entrees + 1){
		switch(tab_liste_instructions_val[i].pos_instr_struct){
			case 0:
				instruction_ADD(tab_liste_instructions_val[i].arg[0], tab_liste_instructions_val[i].arg[1], tab_liste_instructions_val[i].arg[2]);
				break;
			case 1:
				instruction_ADDI(tab_liste_instructions_val[i].arg[0], tab_liste_instructions_val[i].arg[1], tab_liste_instructions_val[i].arg[2]);
				break;
			default:
				printf("Erreur: Cette instruction n'est pas encore implémentée.");
		}
		instruction_actuelle++;
		
	}
}