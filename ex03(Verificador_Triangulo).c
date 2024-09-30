/* 3. Desenvolva um programa que leia três valores do tipo ponto flutuante e verifique se esses valores formam
ou não um triângulo. Caso formem triângulo, o programa deve informar o tipo do triângulo (equilátero,
isósceles ou escaleno) */



#include <stdio.h>

int main() {
    float X, Y, Z;
    
    
    printf("Digite o valor de X: ");
    scanf("%f", &X);
    printf("Digite o valor de Y: ");
    scanf("%f", &Y);
    printf("Digite o valor de Z: ");
    scanf("%f", &Z);
    
    if (X < Y + Z && Y < X + Z && Z < X + Y) {
        
        if (X == Y && Y == Z) {
            printf("Os lados formam um triângulo equilátero.\n");
        } else if (X == Y || X == Z || Y == Z) {
            printf("Os lados formam um triângulo isósceles.\n");
        } else {
            printf("Os lados formam um triângulo escaleno.\n");
        }
    } 
    
    return 0;
}
