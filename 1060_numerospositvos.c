#include <stdio.h>

int main() {
    int positivos = 0;

    float valor;

    for (int i = 0; i < 6; ++i) {
        scanf("%f", &valor);

        if (valor > 0) {
            positivos++;
        }
    }

    printf("%d valores positivos\n", positivos);

    return 0;
}
