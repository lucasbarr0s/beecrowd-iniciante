#include <stdio.h>
 
int main() {
    char name[50];
    double salary, total, TOTAL;
    
    fgets(name, 50, stdin);
    scanf("%lf", &salary);
    scanf("%lf", &total);
    
    TOTAL = (total * 0.15) + salary;
    printf("TOTAL = R$ %.2lf\n", TOTAL);
    return 0;
}
