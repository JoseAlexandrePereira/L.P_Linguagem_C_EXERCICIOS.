/* Write an algorithm that reads two floating values (x and y), which should represent the coordinates of a point in a plane. Next, determine which quadrant the point belongs, or if you are at one of the Cartesian axes or the origin (x = y = 0).

 If the point is at the origin, write the message "Origem".

If the point is at X axis write "Eixo X", else if the point is at Y axis write "Eixo Y".

Input
The input contains the coordinates of a point.

Output
The output should display the quadrant in which the point is.
*/


#include <stdio.h>

double calcular_quadrante(double X, double Y);

int main(){
    
    double x, y;

    printf("Informe X: ");
    scanf("%lf", &x);

    printf("Informe Y: ");
    scanf("%lf", &y);

calcular_quadrante(x, y);
    
        return 0;
   
}

double calcular_quadrante(double X, double Y){

if (X == 0.0 && Y == 0.0) {

        printf("Origem\n");

    } else if (X == 0.0) {

        printf("Eixo Y\n");

    } else if (Y == 0.0) {

        printf("Eixo X\n");

    } else {

    if (X > 0 && Y > 0)
    {
        printf("Q1\n");
    } else if (X < 0 && Y > 0)
    {
        printf("Q2\n");
    }else if (X < 0 && Y < 0)
    {
        printf("Q3\n");
    }else if (X > 0 && Y < 0)
    {
        printf("Q4\n");
    }

    }
}