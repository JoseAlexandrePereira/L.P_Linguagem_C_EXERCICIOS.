/* 09 – Faça um programa que permita que o usuário veja 3 candidatos de uma eleição e possa
votar em um dos candidatos digitando seu número, no final mostre quem ganhou a eleição.
bem como o percentual de votos recebidos, o numero de votos recebidos e o numero total de
votantes
1 – Roberto Carlos
2 – Erasmo Carlos
3 – Raul Seixas
*pressione 99 para sair */

/*------------------------------------------------------------------------------------------------*/

#include <stdio.h>

int resultado_eleição(int cand_1, int cand_2, int cand_3, int total_V, int voto);

/*------------------------------------------------------------------------------------------------*/

int main()
{
    int voto, candidato_1 = 0, candidato_2 = 0, candidato_3 = 0, totalVotos = 0;
    
    while(1){
    printf("----------ELEIÇÕES - 2024.----------\n\n     CANDIDATOS:\n*-------------------*\n|1. Roberto Carlos. |\n|2. Erasmo Carlos.  |\n|3. Raul Seixas.    |\n*-------------------*\n\nInsira seu voto: ");
    scanf("%d", &voto);

        if (voto == 99)
        {
           break;
        }
        
        switch (voto) {
            case 1:
                candidato_1++;
                break;
            case 2:
                candidato_2++;
                break;
            case 3:
                candidato_3++;
                break;
            default:
                printf("Voto inválido! Tente novamente.\n");
        }

        totalVotos++;
    }

    resultado_eleição(candidato_1,candidato_2,candidato_3,totalVotos, voto);

    return 0;
}

/*------------------------------------------------------------------------------------------------*/

int resultado_eleição(int cand_1, int cand_2, int cand_3, int total_V, int voto){

    float porcentagem_1, porcentagem_2, porcentagem_3;

    porcentagem_1 = ((cand_1 * total_V) / 100.0);
    porcentagem_2 = ((cand_2 * total_V) / 100.0);
    porcentagem_3 = ((cand_3 * total_V) / 100.0);
    
    if (porcentagem_1 > porcentagem_2 && porcentagem_1 > porcentagem_3)
    {
        printf("\nPARABÉNS! O candidato Roberto Carlos é o novo prefeito.\n\n");

    }else if(porcentagem_2 > porcentagem_1 && porcentagem_2> porcentagem_3)
    {

        printf("\nPARABÉNS! O candidato Erasmo Carlos é o novo prefeito.\n\n");

    }else{

        printf("\nPARABÉNS! O candidato Raul Seixas é o novo prefeito.\n\n");

    }

    printf("\n--- Resultado da eleição ---\n");
    printf("Total de votos: %d\n", total_V);
    printf("Candidato Roberto Carlos: %.2f%%\n", porcentagem_1);
    printf("Candidato Erasmo Carlos: %.2f%%\n", porcentagem_2);
    printf("Candidato Raul Seixas: %.2f%%\n", porcentagem_3);

}
/*------------------------------------------------------------------------------------------------*/