#include <stdio.h>
 
#define MAX_PESSOAS 5 // Definindo o limite de pessoas para o cadastro
 
// Estrutura para armazenar os dados de cada pessoa
typedef struct {
    char nome[50];
    int idade;
    float altura;
    float peso;
} Pessoa;
 
int main() {
    Pessoa cadastro[MAX_PESSOAS]; // Matriz de pessoas
    int i;
    int pessoas_acima_30 = 0;
    float soma_idade = 0, soma_altura = 0, soma_peso = 0;
 
    // Preencher o cadastro
    printf("Cadastro de Pessoas\n");
    for (i = 0; i < MAX_PESSOAS; i++) {
        printf("\nPessoa %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]s", cadastro[i].nome); // Lê o nome com espaços
        printf("Idade: ");
        scanf("%d", &cadastro[i].idade);
        printf("Altura (em metros): ");
        scanf("%f", &cadastro[i].altura);
        printf("Peso (em kg): ");
        scanf("%f", &cadastro[i].peso);
    }
 
    // Calcular as estatísticas
    for (i = 0; i < MAX_PESSOAS; i++) {
        soma_idade += cadastro[i].idade;
        soma_altura += cadastro[i].altura;
        soma_peso += cadastro[i].peso;
 
        if (cadastro[i].idade > 30) {
            pessoas_acima_30++;
        }
    }
 
    // Exibir as estatísticas
    printf("\nEstatísticas do Cadastro:\n");
    printf("Média de Idade: %.2f anos\n", soma_idade / MAX_PESSOAS);
    printf("Média de Altura: %.2f metros\n", soma_altura / MAX_PESSOAS);
    printf("Média de Peso: %.2f kg\n", soma_peso / MAX_PESSOAS);
    printf("Número de pessoas com mais de 30 anos: %d\n", pessoas_acima_30);
 
    return 0;
}