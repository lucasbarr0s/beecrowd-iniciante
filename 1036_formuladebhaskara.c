#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C;
    double delta, bhaskX1, bhaskX2;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    
    delta = (B * B) - 4 * A * C;
    
    if (delta < 0 || A == 0 || (2 * A == 0))
    {
        printf("Impossivel calcular\n");
    } else {
        bhaskX1 = (-B - sqrt(delta)) / (2 * A);
        bhaskX2 = (-B + sqrt(delta)) / (2 * A);
    
        printf("R1 = %.5lf\n", bhaskX1);
        printf("R2 = %.5lf\n", bhaskX2);   
    }

    return 0;
}
