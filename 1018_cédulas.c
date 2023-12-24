#include <stdio.h>

int main() {
    int valor, notas[7] = {100, 50, 20, 10, 5, 2, 1};
    
    scanf("%d", &valor);
    printf("%d\n", valor);

    for (int i = 0; i < 7; i++) {
        int quantidade = valor / notas[i];
        valor = valor % notas[i];
        printf("%d nota(s) de R$ %d,00\n", quantidade, notas[i]);
    }

    return 0;
}
