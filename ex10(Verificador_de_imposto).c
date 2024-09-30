/* In an imaginary country called Lisarb, all the people are very happy to pay their taxes because they know that doesn’t exist corrupt politicians and the taxes are used to benefit the population, without any misappropriation. The currency of this country is Rombus, whose symbol is R$.

Read a value with 2 digits after the decimal point, equivalent to the salary of a Lisarb inhabitant. Then print the due value that this person must pay of taxes, according to the table below.



Remember, if the salary is R$ 3,002.00 for example, the rate of 8% is only over R$ 1,000.00, because the salary from R$ 0.00 to R$ 2,000.00 is tax free. In the follow example, the total rate is 8% over R$ 1000.00 + 18% over R$ 2.00, resulting in R$ 80.36 at all. The answer must be printed with 2 digits after the decimal point.

Input
The input contains only a float-point number, with 2 digits after the decimal point.

Output
Print the message "R$" followed by a blank space and the total tax to be payed, with two digits after the decimal point. If the value is up to 2000, print the message "Isento".
 */

#include <stdio.h>


int main(){
    
double calcular_imposto(double sal);

double salario;

printf("Informe seu salaŕio: ")/
scanf("%lf", &salario);

calcular_imposto(salario);

    return 0;
}

double calcular_imposto(double sal){

    double valor_imposto;

if (sal <= 2000.00) {

        printf("Isento\n");

    } else if (sal <= 3000.00) {

            valor_imposto = (sal - 2000.00) * 0.08;

        } else if (sal <= 4500.00)
        {
            valor_imposto = 1000.00 * 0.08 + (sal - 3000.00) * 0.18;
            
        }else{
        valor_imposto = 1000.00 * 0.08 + (sal - 4500.00) * 0.28;

        }
       

        printf("R$ %.2lf\n", valor_imposto);
    }
