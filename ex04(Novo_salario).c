/*  4. Uma empresa decidiu dar um aumento escalonado a seus funcionários de acordo com a seguinte regra: 13%
para os salários inferiores ou iguais a R$ 2.000,00; 11% para os salários situados entre R$ 2.000,0 e R$
4.000,00 (inclusive); 9 % para os salários entre R$ 4.000,00 e R$ 8.000,00 (inclusive) e 7% para os demais
salários. Desenvolva um programa que receba o salário atual de um funcionário e forneça o valor do seu novo
salário.
*/

#include <stdio.h>

float aumento_salario(float argumento);


int main()
{
    float salario_atual, novo_salario;

    printf("Informe seu salário atual: ");
scanf("%f", &salario_atual);

 

printf("Seu salário atual é de %.1f e ganhou um reajuste para %.1f.\n", salario_atual, aumento_salario(salario_atual));

    return 0;
}


float aumento_salario(float argumento){

float resultado, argumento_2;

if (argumento <= 2000)
{
   argumento_2 = argumento*13;
   argumento_2 = argumento_2/100;
resultado = argumento_2 + argumento; 

}else if (argumento > 2000 && argumento < 4000)
{
   argumento_2 = (argumento*11)/ 100;
 resultado = argumento_2 + argumento;  
}else if (argumento > 4000 && argumento <= 8000)
{
    argumento_2 = (argumento*9)/ 100;
 resultado = argumento_2 + argumento;  
}else{

    argumento_2 = (argumento*7)/ 100;
 resultado = argumento_2 + argumento; 
}
return resultado;
}