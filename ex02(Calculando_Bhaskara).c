/* Read 3 floating-point numbers. After, print the roots of bhaskara’s formula. If it's impossible to calculate the roots because a division by zero or a square root of a negative number, presents the message “Impossivel calcular”.

Input
Read 3 floating-point numbers (double) A, B and C.

Output
Print the result with 5 digits after the decimal point or the message if it is impossible to calculate. */

#include <stdio.h>
#include <math.h>

void calculaRaizes(double A, double B, double C, double *raiz1, double *raiz2) {
    double delta = B * B - 4 * A * C;

    if (delta < 0 || A == 0) {
        *raiz1 = *raiz2 = NAN; 
    } else {
        *raiz1 = (-B + sqrt(delta)) / (2 * A);
        *raiz2 = (-B - sqrt(delta)) / (2 * A);
    }
}


int podeCalcularRaizes(double A, double B, double C) {
    double delta = B * B - 4 * A * C;
    return !(delta < 0 || A == 0);
}

int main() {
    double A, B, C;
    double raiz1, raiz2;

    
    printf("Digite o valor de A: ");
    scanf("%lf", &A);
    printf("Digite o valor de B: ");
    scanf("%lf", &B);
    printf("Digite o valor de C: ");
    scanf("%lf", &C);

    
    if (podeCalcularRaizes(A, B, C)) {
     
        calculaRaizes(A, B, C, &raiz1, &raiz2);
        
        printf("R1 = %.5lf\n", raiz1);
        printf("R2 = %.5lf\n", raiz2);
    } else {
        printf("Impossivel calcular\n");
    }

    return 0;
}
