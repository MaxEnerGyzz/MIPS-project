# MIPS-project

Projet étudiant de 3A d'un émulateur de micro-processeur MIPS, avec la gestion des registres et de la mémoire ainsi qu'un jeu de 26 instructions.

Les instructions de "branches" et de "jumps" n'ont pas été implémentées.

## Execution de l'émulateur MIPS
3 modes de fonctionnement sont proposés:

* Mode non-interactif:

Syntaxe d'exécution: `./emul-mips prog_filename in1.hex in1.state`


--> Toutes les instructions sont exécutées: la transcription en hexadécimale des instructions est enregistrée dans le fichier *in1.hex* tandis que l'état finale des registres est enregistrée dans le fichier *in1.state*.

---

* Mode pas-a-pas:

Syntaxe d'exécution: `./emul_mips prog_filename -pas`

--> Chaque instruction est exécutée pas-a-pas: demande à l'utilisateur de valider le passage à l'instruction suivante.


L'instruction actuelle et la valeur des registres à la fin de l'instruction actuelle en hexadécimale sont affichées sur le terminal à la fin de l'exécution de l'instruction.

---

* Mode interactif:

Syntaxe d'exécution: `./emul_mips `

--> Le programme demande à l'utilisateur d'entrer une instruction, l'exécute et en demande une nouvelle et ainsi de suite jusqu'à lecture de EXIT.


 L'instruction actuelle et la valeur des registres à la fin de l'instruction actuelle en hexadécimale sont affichées sur le terminal à la fin de l'exécution de l'instruction.

---

Coded with <3 by Mathis GRENIER and Yanis JULIEN.
