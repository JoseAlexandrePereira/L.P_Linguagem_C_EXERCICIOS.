/* O Joãozinho quer calcular e mostrar a quantidade de litros de combustível gasto em uma viagem, usando um carro que faz 12 Km/L. Para isso, ele gostaria que você o ajudasse com um programa simples. Para fazer o cálculo, você tem que ler o tempo gasto (em horas) e a mesma velocidade média (km/h). Dessa forma, você pode obter a distância e então calcular quantos litros seriam necessários. Mostre o valor com três casas decimais após o ponto.

Entrada
O arquivo de entrada contém dois inteiros. O primeiro é o tempo gasto na viagem (em horas). O segundo é a velocidade média durante a viagem (em Km/h).

Saída
Imprima quantos litros seriam necessários para fazer esta viagem, com três dígitos após o ponto decimal. */

#include <stdio.h>

double calcular_combustivel_gasto(int tempo, int velocidade_media); // Criei esta função, para meu código ficar identado, organizado e limpo.

int main() // função principal.
{
    int tempo, velocidade_media; // Declaração das principais variáveis.

    printf("Informe o tempo gasto na viagem (em horas): "); // Nesta função de entrada solicitei a primeira variável(tempo).
    scanf("%d", &tempo);

    printf("\nInforme sua velocidade média (em Km/h): ");// Nesta função de entrada solicitei a segunda variável(velocidade_media).
    scanf("%d", &velocidade_media);


    printf("\n\nPara realizar sua viagem seriam necessário %.3fL de combustível.\n\n",calcular_combustivel_gasto(tempo, velocidade_media)); // Saída do resultado e chamada da função.

    return 0;
}


double calcular_combustivel_gasto(int tempo, int velocidade_media){ // Separei essa função para deixar a parte lógica, parte matemática.

int distancia;
double combustivel_gasto;

    distancia = (velocidade_media * tempo);//Formula física para descobrir distância.

    return combustivel_gasto = distancia / 12.0; // Subtração para descobrir quantos litros foram utilizado em respectiva distância. E nessa função retornamos o resultado para a função principal (main()).
}