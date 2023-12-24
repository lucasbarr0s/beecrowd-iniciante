#include <stdio.h>
 
int main() 
{
    double VALUE;
    scanf("%lf", &VALUE);
    
    if(VALUE >= 0 && VALUE <= 25){
        printf("Intervalo [0,25]\n");
    } else if (VALUE > 25 && VALUE <= 50) {
        printf("Intervalo (25,50]\n");
    } else if (VALUE > 50 && VALUE <= 75) {
        printf("Intervalo (50,75]\n");
    } else if (VALUE > 75 && VALUE <= 100) {
        printf("Intervalo (75,100]\n");
    } else {
        printf("Fora de intervalo\n");
    }
    return 0;
}
