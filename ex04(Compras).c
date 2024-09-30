/* Using the following table, write a program that reads a code and the amount of an item. After, print the value to pay. This is a very simple program with the only intention of practice of selection commands.

 Input
The input file contains two integer numbers X and Y. X is the product code and Y is the quantity of this item according to the above table.

Output
The output must be a message "Total: R$ " followed by the total value to be paid, with 2 digits after the decimal point.
*/


#include <stdio.h>

int calcular_compra(int codigo, int quant);

int main(){

int X, Y;

printf("informe o código do produto:");
scanf("%d", &X);

printf("informe a quantidade do produto: ");
scanf("%d", &Y);

calcular_compra(X, Y);

    return 0;
}

int calcular_compra(int codigo, int quant){

double total_compra;

if (codigo == 1)
{
    total_compra = quant* 4;
}else if (codigo == 2)
{
     total_compra = quant*4.50;
}else if (codigo == 3)
{
     total_compra = quant*5;
}else if (codigo == 4)
{
     total_compra = quant*2;
}else if (codigo == 5)
{
     total_compra = quant*1.50;
}

printf("Total: R$ %.2lf\n", total_compra);


}