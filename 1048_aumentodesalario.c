#include <stdio.h>

int main() 
{
    double salary, reajuste;
    scanf("%lf", &salary);
    
    if (salary >= 0 && salary <= 400.00) {
        reajuste = 0.15;
    } else if (salary <= 800.00) {
        reajuste = 0.12;
    } else if (salary <= 1200.00) {
        reajuste = 0.10;
    } else if (salary <= 2000.00) {
        reajuste = 0.07;
    } else {
        reajuste = 0.04;
    }

    double novoSalario = salary + (salary * reajuste);

    printf("Novo salario: %.2lf\n", novoSalario);
    printf("Reajuste ganho: %.2lf\n", novoSalario - salary);
    printf("Em percentual: %.0lf %%\n", reajuste * 100);

    return 0;
}
