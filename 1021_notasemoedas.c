#include <stdio.h>

int main() {
    double valor;
    int notas[6] = {100, 50, 20, 10, 5, 2};
    int moedas[6] = {100, 50, 25, 10, 5, 1}; 
    int qtdNotas[6] = {0};
    int qtdMoedas[6] = {0};

    scanf("%lf", &valor);

    int centavos = (int)(valor * 100);

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        qtdNotas[i] = centavos / (notas[i] * 100);
        centavos %= notas[i] * 100;
        printf("%d nota(s) de R$ %.2f\n", qtdNotas[i], notas[i] * 1.0);
    }

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        qtdMoedas[i] = centavos / moedas[i];
        centavos %= moedas[i];
        printf("%d moeda(s) de R$ %.2f\n", qtdMoedas[i], moedas[i] / 100.0);
    }

    return 0;
}
