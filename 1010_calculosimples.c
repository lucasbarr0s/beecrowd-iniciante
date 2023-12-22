#include <stdio.h>
 
int main() 
{
    int codeP1, numP1;
    double valueP1;
    
    int codeP2, numP2;
    double valueP2;
    
    double total;
    
    scanf("%d", &codeP1);
    scanf("%d", &numP1);
    scanf("%lf", &valueP1);
    
    scanf("%d", &codeP2);
    scanf("%d", &numP2);
    scanf("%lf", &valueP2);
    
    total = (numP1 * valueP1) + (numP2 * valueP2);
    
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}
