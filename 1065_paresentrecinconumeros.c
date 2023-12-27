#include <stdio.h>
 
int main() {
    int pares = 0;
    
    int valor;
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &valor);
        
        if (valor % 2 == 0) {
            pares++;
        }
    }
    
    printf("%d valores pares\n", pares);

 
    return 0;
}
