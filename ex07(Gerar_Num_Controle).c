/*07 - Desenvolva um programa que, a partir do seu número de identificação, gere um número de controle com base na seguinte fórmula:
(Primeiro Dígito + Último Dígito) * (Soma de Todos os Dígitos) + (Maior Dígito do ID).
Exiba o resultado:
1640422423031
(1 + 1) * (1+6+4+0+4+2+2+4+2+3+0+3+1) 32 * 2
→ 64*/

#include <stdio.h>

int main() {
    char ID[] = "1630482423019";
    int num_controle;
    int soma_total = 0;
    int maior_digito = 0;

    /* Calcular soma total e maior dígito */
    for (int i = 0; i < 13; i++) {
        int digito = ID[i] - '0'; /* Converter para inteiro */
        soma_total += digito;

        if (digito > maior_digito) {
            maior_digito = digito; /* Atualiza o maior dígito */
        }
    }

    /* Calcular número de controle */
    num_controle = ((ID[0] - '0' + ID[12] - '0') * soma_total) + maior_digito; 

    printf("O número de controle com base no ID (%s) é: %d\n", ID, num_controle);
    return 0;
}




