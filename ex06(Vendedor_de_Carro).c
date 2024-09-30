/* 6. Uma concessionária de carros paga a seus vendedores um salário de R$ 3.000,00 por mês, mais uma
comissão de R$ 500,00 para cada carro vendido e mais 5% do valor das venda. Caso o vendedor seja gerente,
ele ainda receberá um bônus de 1% sobre as vendas. Desenvolva um programa para calcular e exibir o salário
do vendedor num dado mês, recebendo como dados de entrada o CPF do vendedor, o número de carros
vendidos, o valor total das vendas e caso seja gerente, o valor de seu bônus. */

#include <stdio.h>

/*
NCV - Número Carros Vendidos.
VV - Valor total das vendas.
VB - Valor bonus (Caso seja gerente).
*/

float calcular_sal_final( int qtdVendida, float valor_venda, int funcionario);

int main(){

    int cpf,NCV, gerente;
    float VV, VB;

printf("Informe seu CPF: ");
scanf("%d", &cpf);

printf("Quantidade de veiculos vendidos: ");
scanf("%d", &NCV);

printf("Qual valor total das vendas: ");
scanf("%f", &VV);

printf("Caso seja gerente informe 1, senão, informe 0: ");
scanf("%d", &gerente);

calcular_sal_final(NCV, VV, gerente);

    return 0;
}

float calcular_sal_final(int qtdVendida, float valor_venda, int funcionario){

float salario_final;
float bonus, bonus_gerente;


if (funcionario == 0)
{
bonus = (valor_venda * 5) / 100;
    salario_final = 3000 + (qtdVendida * 500) + bonus;
}else{
bonus_gerente = (valor_venda *1)/100;
bonus = (valor_venda * 5) / 100;
    salario_final = 3000 + (qtdVendida * 500) + bonus + bonus_gerente;

}

printf(" Seu salário é de: %f nesse mês. Parabéns!\n", salario_final);

}