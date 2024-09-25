/*05 - Dado seu número de identificação, extraia os dígitos das posições específicas 1ª, 3ª e 5ª e
some esses valores. Se o resultado for par, exiba "Número par"; caso contrário, exiba
"Número ímpar". Utilize operadores condicionais para validar a posição.
Exemplo:
1640422423031 ( 1 + 4 + 4 ) = 9
(resultado IMPAR)*/

/*------------------------------------------------------------------------------------------------*/

#include <stdio.h>

void calcular_impar_par(long long id);

int main() {
    long long identificacao;

    printf("Digite sua identificação (13 dígitos): ");
    scanf("%lld", &identificacao);

    calcular_impar_par(identificacao);

    return 0;
}

/*------------------------------------------------------------------------------------------------*/

void calcular_impar_par(long long id) {

    int primeiro, terceiro, quinto, soma;

    primeiro = (id / 1000000000000) % 10;
    terceiro = (id / 10000000000) % 10;
    quinto = (id / 100000000) % 10;

    soma = primeiro + terceiro + quinto;

    printf("O primeiro digito é %d, o terceiro é %d e o quinto é %d. A soma dos 3 dígitos da: %d.", primeiro, terceiro, quinto, soma);

    if (soma % 2 == 0) {

        printf(" Este número é par.\n\n");

    } else {

        printf(" Este número é ímpar.\nlong long\n");

    }
}
/*------------------------------------------------------------------------------------------------*/