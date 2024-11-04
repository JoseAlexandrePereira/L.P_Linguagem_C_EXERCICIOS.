/* Aluno: José Alexandre Pereira */

#include <stdio.h>
#include <math.h>

int opcao_usuario(int op);
int permutacao_simples();
int arranjo_simples();
int combinacao_simples();
int permutacao_com_repeticao();
int arranjo_com_repeticao();
int combinacao_com_repeticao();

/* ----------------------------------------------------------------------------------------------------------------------------------------------------------------------- */

int main()
{
    int opcao;
   
    printf("\n\n\n               *-------*\n               | MENU: |\n*---------------------------------------*\n|1. Permutação Simples (Pn).            |\n|2. Arranjo Simples (An,k).             |\n|3. Combinação simples(C(n,k).          |\n|4. Permutação com repetiçãon (PRn).    |\n|5. Arranjo com repetição (AR(n,k)).    |\n|6. Combinação com repetição (CR(n,k)). |\n|7. Sair.                               |\n*---------------------------------------*\n......................\n> Qual opção deseja: ");
    scanf("%d", &opcao); 
    
    opcao_usuario(opcao);
    
    return 0;
}

/* ----------------------------------------------------------------------------------------------------------------------------------------------------------------------- */

int opcao_usuario(int op){

switch (op)
{
case 1:
   
permutacao_simples();

    break;
case 2:

arranjo_simples();

    break;
case 3:

combinacao_simples();

    break;
case 4:

permutacao_com_repeticao();

    break;
case 5:

arranjo_com_repeticao();

    break;
case 6:

combinacao_com_repeticao();

    break;
default:

    return 0;
    
    break;
}

}

/* ----------------------------------------------------------------------------------------------------------------------------------------------------------------------- */

int permutacao_simples(){

int num;
int fatorial = 1;

 printf("\nDigite o número total de elementos (n): ");
scanf("%d", &num);

for (int i = 1; i <= num; i++)
{
    fatorial = i * fatorial;
}

printf("\nO valor da permutação simples de %d é: %d.", num, fatorial);

return main();

}

/* ----------------------------------------------------------------------------------------------------------------------------------------------------------------------- */
int arranjo_simples(){

int num;
int num_posicao;
int posicao;
int fatorial = 1;
int fatorial_posicao = 1;
int resultado;

printf("\n\nVocê escolheu Arranjo Simples. \n");

 printf("\nDigite o número total de elementos (n): ");
scanf("%d", &num);

printf("\nInforme o número de elementos a serem arranjados (k): ");
scanf("%d", &posicao);

if (posicao > num)
{
    printf("\nEm arranjo, k não pode ser maior que n. ");
}else{

for (int i = 1; i <= num; i++)
{
    fatorial = i * fatorial;
}

    num_posicao = num - posicao;

for (int i = 1; i <= num_posicao; i++)
{
    fatorial_posicao = i * fatorial_posicao;
}

resultado = fatorial/fatorial_posicao;

printf("\nO valor do arranjo simples de %d!/(%d-%d)! é: %d.", num, num, posicao, resultado);

}
 return main();

}

/* ----------------------------------------------------------------------------------------------------------------------------------------------------------------------- */
int combinacao_simples(){

int num;
int num_posicao;
int posicao;
int fatorial = 1;
int fatorial_posicao = 1;
int fatorial_posicao_1 = 1;
int resultado;

printf("\n\nVocê escolheu Combinação Simples. \n");

 printf("\nDigite o número total de elementos (n): ");
scanf("%d", &num);

printf("\nInforme o número de elementos a serem arranjados (k): ");
scanf("%d", &posicao);

for (int i = 1; i <= num; i++)
{
    fatorial = i * fatorial;
}

for (int i = 1; i <= posicao; i++)
{
    fatorial_posicao = i * fatorial_posicao;
}

    num_posicao = num - posicao;

for (int i = 1; i <= num_posicao; i++)
{
    fatorial_posicao_1 = i * fatorial_posicao_1;
}

resultado = fatorial/(fatorial_posicao * fatorial_posicao_1);

printf("\nO valor do arranjo simples de %d!/%d!(%d-%d)! é: %d.", num, posicao, num, posicao, resultado);

return main();

}


/* ----------------------------------------------------------------------------------------------------------------------------------------------------------------------- */
int permutacao_com_repeticao(){

int n, k;

    printf("\n\nVocê escolheu permutação com repetição. \n");

    printf("\nDigite o número total de elementos (n): ");
    scanf("%d", &n);

    printf("\nDigite a quantidade de elementos que terá repetição (k): ");
    scanf("%d", &k);

    int repeticoes[k];
    int soma;

    for (int i = 0; i < k; i++) {
        printf("\nDigite o número de repetições do elemento %d: ", i + 1);
        scanf("%d", &repeticoes[i]);

        soma += repeticoes[i];
    }
    if (soma > n)
    {
       printf("\nA soma dos elementos informados não pode ser maior que 'n'.\n");

       return main();

    }else{
        
        int fatorial_n = 1;

    for (int i = 2; i <= n; i++) {
        fatorial_n *= i;
    }

    int fatorial_repeticoes = 1;

    for (int i = 0; i < k; i++) {

        int fatorial_temp = 1;

        for (int j = 2; j <= repeticoes[i]; j++) {
            fatorial_temp *= j;
        }
        fatorial_repeticoes *= fatorial_temp;
    }

    int resultado = fatorial_n / fatorial_repeticoes;

    printf("\nO número de permutações com repetição é: %d\n", resultado);;

    return main();
    }
    
    
}

/* ----------------------------------------------------------------------------------------------------------------------------------------------------------------------- */
int arranjo_com_repeticao(){
int n, k, resultado; 

printf("\n\nVocê escolheu arranjo com repetição. \n");

    printf("\nDigite o número total de elementos (n): ");
    scanf("%d", &n);

    printf("\nDigite a quantidade de elementos que terá repetição (k): ");
    scanf("%d", &k);

    resultado =  pow(n,k);

    printf("O número do Arranjo n^k: %d", resultado);

}

/* ----------------------------------------------------------------------------------------------------------------------------------------------------------------------- */
int combinacao_com_repeticao(){

int n, k, resultado, fatorial_n = 1, fatorial_k = 1, fatorial_n_k = 1; 

printf("\n\nVocê escolheu Combinação com repetição. \n");

    printf("\nDigite o número total de elementos (n): ");
    scanf("%d", &n);

    printf("\nDigite a quantidade de elementos que terá repetição (k): ");
    scanf("%d", &k);

    int n_1 = (n + k - 1);

    for (int i = 1; i <= n_1; i++)
    {
         fatorial_n = i * fatorial_n; 
    }

    for (int i = 1; i <= k; i++)
    {
         fatorial_k = i * fatorial_k; 
    }

    int sub = (n - 1);

    for (int i = 1; i <= sub; i++)
    {
        fatorial_n_k = i * fatorial_n_k;
    }
    
    resultado = (fatorial_n / (fatorial_k * fatorial_n_k));

     printf("O número da combinação com repetição é: %d", resultado);

     return main();
    
}
/* ----------------------------------------------------------------------------------------------------------------------------------------------------------------------- */
