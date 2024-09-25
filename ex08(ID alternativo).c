/* 08 - Crie um programa que gera um ID alternativo com base no seu ID O código deve ser
composto pelos seguintes elementos:

A primeira parte é a soma dos dígitos do ID multiplicada por 3.
A segunda parte é a multiplicação dos dígitos do ID
A terceira parte é o ID ao contrário.
O resultado deve ser A primeira parte + A segunda parte + A terceira parte */

#include <stdio.h>

int main()
{
    char ID[] = "1630482423019";

    int soma_total = 0, mult_total = 0, primeira_parte, segunda_parte, terceira_parte, comprimento;

    printf("Seu ID alternativo é: ");

    for (int i = 0; i < 13; i++) {//Aqui utilizei uma estrutura de repetição para realizar soma.
    soma_total += ID[i] - '0';
    }

    printf("%d", soma_total);


    for (int j = 2; j < 13; j++){// aqui utilizei a mesma teoria de cima, porém, para multiplicação.

        mult_total *= ID[j] - '0';
    }

    printf("%d", mult_total);

    // Nessa estrutura de repetição, utilizei while para contar o comprimento do ID, com loop while (ID[comprimento]) != '\0'
     while (ID[comprimento] != '\0') {
        comprimento++;
    }

     primeira_parte = soma_total * 3;
     segunda_parte = mult_total;

    // ENtão nessa estrutura de repetição, o for percorre a string ao contrário.
    for (int k = comprimento - 1; k >= 0; k--) {
        printf("%c", ID[k]);

    }
    printf("\n");

    return 0;
}
