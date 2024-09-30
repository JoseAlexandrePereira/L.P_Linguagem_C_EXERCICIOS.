/* 5. Desenvolva um programa que calcule a média aritmética de quatro números, ponto flutuante, informados
pelo usuário. O programa deve exibir o valor da média e, para cada número exibir se ele está abaixo ou acima
da média. */

#include <stdio.h>

float calcular_media(float a, float b, float c, float d);




int main(){

    float n1, n2, n3, n4;

    printf("Informe quatro números: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

calcular_media(n1, n2, n3, n4);

    return 0;
}

float calcular_media(float a, float b, float c, float d){

float media;


media = (a + b + c + d) / 4.0;

printf("Média: %.f\n", media);

int contador = 1;


if (a >= media )
{
   printf("O número %.f está na média.\n", a);
}else{
    printf("O número %.f está abaixo da média.\n", a);
}
if (b >= media )
{
   printf("O número %.f está na média.\n", b);
}else{
    printf("O número %.f está abaixo da média.\n", b);
}
if (c >= media )
{
   printf("O número %.f está na média.\n", c);
}else{
    printf("O número %.f está abaixo da média.\n", c);
}
if (d >= media )
{
   printf("O número %.f está na média.\n", d);
}else{
    printf("O número %.f está abaixo da média.\n", d);
}
 
 
}
