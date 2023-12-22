#include <stdio.h>
#include <math.h>

int main() 
{
    const double pi = 3.14159;
    int raio;
    double sphere_area;
    
    scanf("%d", &raio);
    
    sphere_area = (4/3.0) * pi * pow(raio, 3);
    
    printf("VOLUME = %.3lf\n", sphere_area);
    return 0;
}
