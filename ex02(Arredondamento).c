/* 2. Desenvolva um programa que realize arredondamentos de números utilizando a regra usual da matemática:
se a parte fracionária for maior do que ou igual a 0,5, o número é arredondado para o inteiro imediatamente
superior, caso contrário, é arredondado para o inteiro imediatamente inferior.
 */


#include <stdio.h>
#include <math.h>


int main(){

float numero;

printf("Digite um valor real:");
scanf("%f", &numero);

int numero_arredondado;

if (numero >= 0)
{
    numero_arredondado = (int)(numero + 0.5);
}else{

    numero_arredondado = (int)(numero - 0.5);
}

printf("O arredondamento do número %.1f é: %d\n", numero, numero_arredondado);

return 0;

}


