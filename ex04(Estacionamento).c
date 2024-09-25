/*04 - Crie um programa que calcule o valor a ser pago em um estacionamento, considerando o seguinte
sistema de tarifação:

As primeiras 2 horas são cobradas a R$ 5,00 cada.
Da 3ª até a 5ª hora, a tarifa é de R$ 3,00 por hora adicional.
A partir da 6ª hora, a tarifa é de R$ 2,00 por hora adicional. 

O programa deve solicitar o número total de horas que o veículo permaneceu no estacionamento e calcular o valor total a
ser pago.*/

/*______________________________________________________________________________________________________________________________________________________*/

#include <stdio.h>

float calcular_Valor_Pago(float hrs);

/*______________________________________________________________________________________________________________________________________________________*/

int main()
{

 float horas;

    printf("Qual a quantidade de horas que o veículo permaneceu no estacionamento?\nR: ");
    scanf("%f", &horas);

    printf("\nA quantidade de horas que o veículo ficou no local foram %.2f horas. O Valor a ser pago é de: R$ %.2f.\n\n", horas, calcular_Valor_Pago(horas));

    return 0;
}

/*______________________________________________________________________________________________________________________________________________________*/
float calcular_Valor_Pago(float hrs){

float Valor_final;

if (hrs <= 2.0)
{
    return 5;

}else if(hrs >= 3.0 && hrs <= 5.0){

    Valor_final = (((hrs - 2.0) * 3.0) + 5.0);

    return Valor_final;
}else{

    Valor_final = (((hrs - 2.0) * 2.0) + 5.0);

    return Valor_final;
}
}
/*______________________________________________________________________________________________________________________________________________________*/