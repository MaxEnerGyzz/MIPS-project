# MIPS-project

Projet étudiant de 3A d'un émulateur de micro-processeur MIPS, avec la gestion des registres et un jeu d'instructions de 26 instructions.
Les instructions de "branches" et de "jumps" n'ont pas été implémentées.

##titre Execution de l'émulateur MIPS
3 modes de fonctionnement sont proposés:

* Mode non-interactif:
Syntaxe d'exécution: './emul-mips prog_filename in1.hex in1.state'

--> Toutes les instructions sont exécutées: la transcription en héxadécimale des instructions est enregistrée dans le fichier *in1.hex* tandis que l'état finale des registres est enregistrée dans le fichier *in1.state*.

Have fun :)
