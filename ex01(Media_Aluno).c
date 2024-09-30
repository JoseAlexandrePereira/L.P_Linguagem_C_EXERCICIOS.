
/* 1. Desenvolva um programa que calcule a média de um aluno na disciplina, considerando os critérios de
avaliação indicados no plano de aulas. O programa deve solicitar a entrada de todas as notas das avaliações e
seus respectivos pesos. Mostre a média como resultado e caso ela seja maior ou igual a 6.0, informe que o
aluno foi aprovado. Caso a nota seja inferior à 6.0, deve-se solicitar a nota do IFA (instrumento final de
avaliação) e apresentar a nota final do estudante e sua situação (aprovado ou reprovado). Observação: para
esse exercício não considere a frequência.
 */


#include <stdio.h>

int main() {

    int num_avaliacoes;

    printf("Digite o número de avaliações: ");
    scanf("%d", &num_avaliacoes);

    double notas[num_avaliacoes];

    int pesos[num_avaliacoes];

    double soma_notas = 0.0;

    int soma_pesos = 0;

    int contador = 0; 

    
    while (contador < num_avaliacoes) {

        printf("Digite a nota da avaliação %d: ", contador + 1);
        scanf("%lf", &notas[contador]);

        printf("Digite o peso da avaliação %d (inteiro): ", contador + 1);
        scanf("%d", &pesos[contador]);

        soma_notas += notas[contador] * pesos[contador];

        soma_pesos += pesos[contador];

        contador++; 
    }

    
    double media = soma_notas / soma_pesos;

    printf("A média do aluno é: %.2lf\n", media);

    if (media >= 6.0) {
        printf("O aluno está aprovado!\n");
    } else {
        double nota_ifa;
        printf("Digite a nota do IFA: ");
        scanf("%lf", &nota_ifa);
        
        
        double nota_final = (media + nota_ifa) / 2.0;
        printf("A nota final do aluno é: %.2lf\n", nota_final);
        
        
        if (nota_final >= 6.0) {
            printf("O aluno está aprovado!\n");
        } else {
            printf("O aluno está reprovado.\n");
        }
    }

    return 0;
}
