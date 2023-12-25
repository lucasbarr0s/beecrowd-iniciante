#include <stdio.h>

int main() 
{
    double N1, N2, N3, N4;
    double average;
    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
    
    average = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;
    
    printf("Media: %.1lf\n", average);
    
    if (average >= 7.0)
    {
        printf("Aluno aprovado.\n");
    } 
    else if (average >= 5.0 && average <= 6.9)
    {
        double exame;
        double new_average;
        printf("Aluno em exame.\n");
        
        scanf("%lf", &exame);
        printf("Nota do exame: %.1lf\n", exame);
        
        new_average = (exame + average) / 2;
        
        if (new_average >= 5.0)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", new_average);
        } 
        else 
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", new_average);
        }
    } 
    else 
    {
        printf("Aluno reprovado.\n");
    }
    
    return 0;
}
