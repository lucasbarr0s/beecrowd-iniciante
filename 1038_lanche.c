#include <stdio.h>
 
int main() 
{
    int CODE, quantidade;
    
    double cachorro = 4.00;
    double xsalada = 4.50;
    double xbacon = 5.00;
    double torrada = 2.00;
    double refrigerante = 1.50;
    
    double total;
    scanf("%d %d", &CODE, &quantidade);
    
    if(CODE == 1) {
        total = cachorro * quantidade;
        printf("Total: R$ %.2lf\n", total);
    } else if (CODE == 2) {
        total = xsalada * quantidade;
        printf("Total: R$ %.2lf\n", total);
    } else if (CODE == 3) {
        total = xbacon * quantidade;
        printf("Total: R$ %.2lf\n", total);
    } else if (CODE == 4) {
        total = torrada * quantidade;
        printf("Total: R$ %.2lf\n", total);
    } else if (CODE == 5) {
        total = refrigerante * quantidade;
        printf("Total: R$ %.2lf\n", total);
    }
    
    return 0;
}
