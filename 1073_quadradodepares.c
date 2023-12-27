#include <stdio.h>
#include <math.h>

int main() 
{
    int number;
    scanf("%d", &number);
    
    for(int i = 1; i <= number; i++) {
        if (i % 2 == 0) {
            int result = pow(i, 2);
            printf("%d^2 = %d\n", i, result);
        }
    }
    return 0;
}
