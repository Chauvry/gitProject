#include <stdio.h>
#include "fonction/addition.h"
#include "fonction/soustraction.h"
#include "fonction/multiplication.h"
#include "fonction/division.h"

int main() {
    double num1, num2;
    char op;

    printf("Entrez le premier nombre: ");
    scanf("%lf", &num1);

    printf("Entrez un operateur (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Entrez le deuxième nombre: ");
    scanf("%lf", &num2);

    switch(op) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, addition(num1, num2));
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, soustraction(num1, num2));
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, multiplication(num1, num2));
            break;
        case '/':
            if(num2 != 0) {
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, division(num1, num2));
            } else {
                printf("Erreur: Division par zero!\n");
            }
            break;
        default:
            printf("Operateur non reconnu!\n");
    }

    return 0;
}
