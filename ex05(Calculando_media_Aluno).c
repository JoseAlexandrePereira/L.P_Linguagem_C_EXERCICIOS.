/* Read four numbers (N1, N2, N3, N4), which one with 1 digit after the decimal point, corresponding to 4 scores obtained by a student. Calculate the average with weights 2, 3, 4 e 1 respectively, for these 4 scores and print the message "Media: " (Average), followed by the calculated result. If the average was 7.0 or more, print the message "Aluno aprovado." (Approved Student). If the average was less than 5.0, print the message: "Aluno reprovado." (Reproved Student). If the average was between 5.0 and 6.9, including these, the program must print the message "Aluno em exame." (In exam student).

In case of exam, read one more score. Print the message "Nota do exame: " (Exam score) followed by the typed score. Recalculate the average (sum the exam score with the previous calculated average and divide by 2) and print the message “Aluno aprovado.” (Approved student) in case of average 5.0 or more) or "Aluno reprovado." (Reproved student) in case of average 4.9 or less. For these 2 cases (approved or reproved after the exam) print the message "Media final: " (Final average) followed by the final average for this student in the last line.

Input
The input contains four floating point numbers that represent the students' grades.

Output
Print all the answers with one digit after the decimal point. */

#include <stdio.h>

double calcular_media();

int main()
{
    double n1, n2, n3, n4;

    printf("Informe nota 1: ");
    scanf("%lf", &n1);

    printf("Informe nota 2: ");
    scanf("%lf", &n2);


    printf("Informe nota 3: ");
    scanf("%lf", &n3);

    printf("Informe nota 4: ");
    scanf("%lf", &n4);

calcular_media(n1, n2, n3, n4);

    return 0;
}

double calcular_media(double nota_1, double nota_2, double nota_3, double nota_4){

double media;

media = (nota_1 * 2.0 + nota_2 * 3.0 + nota_3 * 4.0 + nota_4 * 1.0) / 10.0;

printf("Media: %.1lf\n", media);

if (media >= 7.0)
{
   printf("Aluno aprovado\n");
} else if (media < 5.0)
{
    printf("Aluno reprovado\n");
}else
{

    double nota_exame, media_final;


    printf("Aluno em exame.\n");
        
        scanf("%lf", &nota_exame);

        printf("Nota do exame: %.1f\n", nota_exame);
        
        
        media_final = (media + nota_exame) / 2.0;
        
        if (media_final >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        
        printf("Media final: %.1f\n", media_final);

}

}