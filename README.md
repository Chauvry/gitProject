# gitProject
# Calculatrice

Ce projet implémente une calculatrice simple en utilisant le langage C. Il contient des fonctions pour effectuer les opérations d'addition, de soustraction, de multiplication et de division.

## Structure des fichiers

- `main.c` : contient la logique principale du programme.
- `addition.h` et `addition.c` : contiennent la fonction d'addition.
- `soustraction.h` et `soustraction.c` : contiennent la fonction de soustraction.
- `multiplication.h` et `multiplication.c` : contiennent la fonction de multiplication.
- `division.h` et `division.c` : contiennent la fonction de division.

## Fonctionnalités

La calculatrice prend en entrée deux nombres et un opérateur (+, -, *, /) saisis par l'utilisateur. Ensuite, elle effectue l'opération demandée et affiche le résultat.

## Compilation

Pour compiler tous les fichiers ensemble, utilisez la commande suivante :

```bash
gcc main.c fonction/addition.c fonction/soustraction.c fonction/multiplication.c fonction/division.c -o calculatrice

Cela produira un exécutable nommé calculatrice que vous pouvez ensuite exécuter.

Exécution
Pour exécuter la calculatrice, utilisez la commande suivante : ./calculatrice
Suivez les instructions affichées à l'écran pour entrer les nombres et l'opérateur.

