#include <stdio.h>

int main()
{
    int number, hours;
    double value, salary;
    
    scanf("%d", &number);
    scanf("%d", &hours);
    scanf("%lf", &value);
    
    salary = value * hours;
    
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf\n", salary);
    return 0;
}
