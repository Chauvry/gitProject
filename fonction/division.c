#include "division.h"

double division(double a, double b) {
    if(b != 0) {
        return a / b;
    } else {
        return 0.0; // Vous pourriez gérer l'erreur autrement si vous le souhaitez
    }
}
