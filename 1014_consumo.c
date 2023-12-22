#include <stdio.h>
 
int main() 
{
    int X;
    double Y;
    double average;
    
    scanf("%d", &X);
    scanf("%lf", &Y);
    
    average = X / Y;
    
    printf("%.3lf km/l\n", average);
    
    return 0;
}
