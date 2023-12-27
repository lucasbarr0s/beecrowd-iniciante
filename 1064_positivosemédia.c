#include <stdio.h>

int main() {
    int positivos = 0;
    float sum_positivos = 0;
    float valor;

    for (int i = 0; i < 6; ++i) {
        scanf("%f", &valor);

        if (valor > 0) {
            positivos++;
            sum_positivos += valor;
        }
    }

    printf("%d valores positivos\n", positivos);

    if (positivos > 0) {
        printf("%.1f\n", sum_positivos / positivos);
    }

    return 0;
}
