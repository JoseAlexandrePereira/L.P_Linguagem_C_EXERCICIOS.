/* Read the start time and end time of a game, in hours. Then calculate the duration of the game, knowing that the game can begin in a day and finish in another day, with a maximum duration of 24 hours. The message must be printed in portuguese “O JOGO DUROU X HORA(S)” that means “THE GAME LASTED X HOUR(S)”

Input
Two integer numbers representing the start and end time of a game.

Output
Print the duration of the game as in the sample output */


#include <stdio.h>

void calcular_jogo(int inicio, int termino);

int main(){
    int horas_inicio, horas_termino;
	
    scanf("%d %d", &horas_inicio, &horas_termino);
	
    calcular_jogo(horas_inicio, horas_termino);

    return 0;
}

void calcular_jogo(int inicio, int termino){
    int duracao;
    
    if (inicio < termino){
        duracao = termino - inicio;
    }else if (inicio > termino){
        duracao = 24 - inicio + termino;
    }else{
        duracao = 24;
    }
    
    printf("O JOGO DUROU %d HORA(S)\n", duracao);
}