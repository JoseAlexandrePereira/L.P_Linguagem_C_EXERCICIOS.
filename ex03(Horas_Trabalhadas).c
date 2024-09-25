/*  03 - Escreva um programa que solicite o número de horas trabalhadas em uma semana e a taxa
horária de pagamento. Calcule o salário semanal, considerando que as primeiras 40 horas são pagas
normalmente, mas as horas extras (acima de 40) são pagas com um adicional de 50% sobre a taxa
horária.
Se o número de horas for superior a 60, exiba uma mensagem indicando que o número de horas é
inválido.*/

/*____________________________________________________________________________________________________________________*/

#include <stdio.h>

float calcular_pagamento(float horas, float Taxa_pag);

/*____________________________________________________________________________________________________________________*/

int main()
{
    float hrs, txpg;

    printf("\nInforme o número de horas trabalhadas: ");
    scanf("%f", &hrs);

    printf("\nDigite a taxa horária de pagamento: ");
    scanf("%f", &txpg);

    printf("\nSuas horas trabalhadas foi %.2f horas e a taxa horária de pagamento é R$ %.2f. Seu sálario esse mês é de: R$ %.2f\n\n\n", hrs, txpg, calcular_pagamento(hrs, txpg));

    return 0;
}

/*____________________________________________________________________________________________________________________*/

float calcular_pagamento(float horas, float Taxa_pag){

float pagamento, horas_extra;

if(horas < 0 || horas > 60.0){

    printf("\nNúmero de horas inválido.\n");

    return main();
}else if(horas <= 40.0){

    pagamento = horas * Taxa_pag;

    return pagamento;
}else{

    horas_extra = horas - 40.0;
    pagamento = (Taxa_pag * 40.0) + ((horas_extra * Taxa_pag) / 2); 

    return pagamento;

}

}
/*____________________________________________________________________________________________________________________*/