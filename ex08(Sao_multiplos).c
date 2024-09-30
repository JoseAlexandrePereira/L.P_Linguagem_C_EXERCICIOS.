/* Read two integer values (A and B). After, the program should print the message "Sao Multiplos" (are multiples) or "Nao sao Multiplos" (aren’t multiples), corresponding to the read values.

Input
The input has two integer numbers.

Output
Print the relative message to the input as stated above. */

#include <stdio.h>

int calcular_multiplos(int a, int b);

int main()
{
    int n1, n2;

    printf("Digite um número:");
    scanf("%d", &n1);

    printf("Informe outro número: ");
    scanf("%d", &n2);

calcular_multiplos(n1, n2);

    return 0;
}

int calcular_multiplos(int a, int b){

if (b % a == 0 || a % b == 0)
{
    printf("Sao multiplos\n");
}else{
    printf("Nao sao Multiplos\n");
}

}
