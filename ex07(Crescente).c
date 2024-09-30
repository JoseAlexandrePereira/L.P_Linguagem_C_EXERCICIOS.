/* Read three integers and sort them in ascending order. After, print these values in ascending order, a blank line and then the values in the sequence as they were readed.

Input
The input contains three integer numbers.

Output
Present the output as requested above. */

#include<stdio.h>

int calcular_ordem(int a, int b, int c);

int main(){

    int n1, n2, n3;

    scanf("%d%d%d", &n1, &n2, &n3);

    calcular_ordem(n1,n2,n3);

    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%d\n", n3);

    return 0;
}

int calcular_ordem(int a, int b, int c){

    if (a < b && a < c && b > c)
    {
        printf("%d\n", a);
        printf("%d\n", c);
        printf("%d\n", b);
    }
    else if (a < b && a < c && b < c)
    {
        printf("%d\n", a);
        printf("%d\n", b);
        printf("%d\n", c);
    }
    else if (b < a && b < c && a < c)
    {
        printf("%d\n", b);
        printf("%d\n", a);
        printf("%d\n", c);
    }
    else if (b < a && b < c && a > c)
    {
        printf("%d\n", b);
        printf("%d\n", c);
        printf("%d\n", a);
    }
    else if (c < a && c < b && a < b)
    {
        printf("%d\n", c);
        printf("%d\n", a);
        printf("%d\n", b);
    }
    else
    {
        printf("%d\n", c);
        printf("%d\n", b);
        printf("%d\n", a);
    }
}