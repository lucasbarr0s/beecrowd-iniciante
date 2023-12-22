#include <stdio.h>
 
int main() {
    int tempoH, vM;
    int distance;
    double litros;
    
    scanf("%d", &tempoH);
    scanf("%d", &vM);
    
    distance = tempoH * vM;
    litros = distance / 12.0;
    
    printf("%.3lf\n", litros);
    return 0;
}
