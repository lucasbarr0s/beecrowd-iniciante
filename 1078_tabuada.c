#include <stdio.h>
 
int main() {
    int number;
    scanf("%d", &number);
    
    for (int i = 1; i <= 10; i++) {
        int result = number * i;
        printf("%d x %d = %d\n", i, number, result);
    }
    return 0;
}
