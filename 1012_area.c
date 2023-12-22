#include <stdio.h>
#include <math.h>

int main() 
{
    double pi = 3.14159;
    double A, B, C;
    double area_tri, area_circ, area_tra, area_quad, area_reta;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    
    area_tri = (A * C) / 2;
    area_circ = pi * (pow(C, 2));
    area_tra = ((A + B) * C) / 2;
    area_quad = B * B;
    area_reta = A * B;
    
    printf("TRIANGULO: %.3lf\n", area_tri);
    printf("CIRCULO: %.3lf\n", area_circ);
    printf("TRAPEZIO: %.3lf\n", area_tra);
    printf("QUADRADO: %.3lf\n", area_quad);
    printf("RETANGULO: %.3lf\n", area_reta);
    return 0;
}
