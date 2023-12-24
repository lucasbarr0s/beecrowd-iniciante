#include <stdio.h>
 
int main() 
{
    int lifeDays;
    int lifeInYears, months, days;

    scanf("%d", &lifeDays);
    
    lifeInYears = lifeDays / 365;
    months = (lifeDays % 365) / 30;
    days = (lifeDays % 365) % 30;

    printf("%d ano(s)\n", lifeInYears);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);
    return 0;
}
