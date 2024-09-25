/*06 - Crie um código de validação que utiliza a soma dos dígitos pares do seu ID. O resultado
desse cálculo deve ser multiplicado pelo segundo dígito do ID do aluno. Exiba o resultado e
uma mensagem de validação específica.
1
640422423031 6+4+4+2+2+4+2
= 24 * 6 == 144*/

#include <stdio.h>

int main()
{

long long ID = 1630482423019, par_1, par_2, par_3, par_4, par_5, par_6, par_7, par_8; //Meu RA.

    par_1 = (ID / 100000000000) % 10;
    par_2 = (ID / 1000000000) % 10;
    par_3 = (ID / 100000000) % 10;
    par_4 = (ID / 10000000) % 10;
    par_5 = (ID / 1000000) % 10;
    par_6 = (ID / 100000) % 10;
    par_7 = (ID / 10000) % 10;
    par_8 = (ID/ 100) %10;

    int soma = par_1 + par_2 + par_3 + par_4 + par_5 + par_6 + par_7+par_8;

    int result = soma * 6;

    printf("\n\nO RA do Aluno José Alexandre Pereira é %lld e a soma dos números pares  %lld + %lld + %lld + %lld + %lld + %lld + %lld + %lld é: %d. A soma * o segundo digito do RA(6) é: %d.\n\n", ID, par_1, par_2, par_3, par_4, par_5, par_6, par_7, par_8, soma, result);

    return 0;
}
