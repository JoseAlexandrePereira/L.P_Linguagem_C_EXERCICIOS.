/* 02 - Escreva um programa que solicite uma pontuação entre 0 e 100 e classifica em diferentes
categorias:
"Excelente" para pontuação entre 90 e 100.
"Bom" para pontuação entre 70 e 89.
"Regular" para pontuação entre 50 e 69.
"Insuficiente" para pontuação entre 30 e 49.
“Muito insuficiente" para pontuação abaixo de 30. Adicionalmente, o programa deve verificar
se a pontuação inserida está dentro do intervalo válido (0-100). */
/* ------------------------------------------------------------------------------------------------*/

#include <stdio.h>

int calcular_pontuacao(int pontos);
/* --------------------------------------------------------------- */
int main()
{
    int pontuacao;

    printf("Informe sua pontuação (0 - 100): ");
    scanf("%d", &pontuacao);

    calcular_pontuacao(pontuacao);

    return 0;
}

/* --------------------------------------------------------------- */

int calcular_pontuacao(int pontos){

if (pontos < 0 || pontos > 100)
{

    printf("\nNúmero informado inválido.\n");
    return main();

}else if(pontos >= 90 && pontos <= 100){

    printf("\nExcelente!\n");

}else if(pontos >= 70 && pontos <= 89){

    printf("\nBom!\n");

}else if(pontos >= 50 && pontos <= 69){

    printf("\nRegular!\n");

}else if(pontos >= 30 && pontos <= 49){

    printf("\nInsuficiente!\n");

}else{

    printf("\nMuito insuficiente!\n");

}
}