#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num>= 20 && num <= 90)
    {
       printf("\n\nNumero está entre 20 e 90.\n");
    }else{
        printf("\n\nO número não está entre 20 e 90.\n");
    }
    
    return 0;
}
