#include <stdio.h>
#include <string.h>

int main() {
    char frase[1000]; // Declaração de uma string grande o suficiente para a frase
    int i, palavras = 1; // Começamos com 1 palavra porque o último espaço não conta
    
    // Lê a frase do usuário
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin); // Usa fgets para ler a frase com espaços
    
    // Percorre cada caractere da frase
    for (i = 0; frase[i] != '\0'; i++) {
        // Se encontrar um espaço, incrementa a contagem de palavras
        if (frase[i] == ' ' && frase[i+1] != ' ' && frase[i+1] != '\n' && frase[i+1] != '\0') {
            palavras++;
        }
    }

    // Exibe o número de palavras
    printf("Numero de palavras na frase: %d\n", palavras);

    return 0;
}
