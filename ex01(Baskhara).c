/* 01 - Escreva um programa que resolve uma equação do segundo grau na forma ax^2 + bx + c = 0. O programa deve solicitar os coeficientes a, b, e c e verificar a natureza das raízes:

Se o discriminante (b^2-4ac) for positivo, calcule e exiba as duas raízes reais.
Se o discriminante for zero, exiba a raiz real única.
Se o discriminante for negativo, exiba uma mensagem informando que as raízes são complexas. */
/* ------------------------------------------------------------------------------------------------------------ */
#include <stdio.h>
#include <math.h> // Essa biblioteca fornece diversas funções matemáticas, incluindo a função sqrt() que calcula a raiz quadrada de um número.

void Calcular_Bhaskara(double A, double B, double C);
void Calcular_raizes(double result, double a, double b);

/* ------------------------------------------------------------------------------------------------------------ */
int main(){
    double a, b, c;

    // Entrada das variáveis a, b e c.
    printf("Informe o valor da variável A: ");
    scanf("%lf", &a); 
    printf("Informe o valor da variável B: ");
    scanf("%lf", &b); 
    printf("Informe o valor da variável C: ");
    scanf("%lf", &c); 

    Calcular_Bhaskara(a, b, c); //Função para calcular bhaskara.
   
    return 0;
}
/* ------------------------------------------------------------------------------------------------------------ */
void Calcular_Bhaskara(double A, double B, double C){
double resultado;

if (A == 0) {
    printf("O coeficiente A não pode ser zero.\n");
    return;
}

resultado =  (pow(B,2) - ((4*A)*C)); //formula de bhaskara.

if (resultado > 0 || resultado == 0)
{
    Calcular_raizes(resultado, A, B);
}else{
    printf("\nAs raízes são complexas\n");
}

}
/* ------------------------------------------------------------------------------------------------------------ */
void Calcular_raizes(double result, double a, double b){ // função para calcular o valor positivo e negativo da raiz.

double x1, x2;

x1 = ((b * -1) + sqrt(result)) / (2*a);
x2 = ((b * -1) - sqrt(result)) / (2*a);

printf("\nOs valores das raízes são: %.2lf e %.2lf.\n", x1, x2);

}
/* ------------------------------------------------------------------------------------------------------------ */