#include <stdio.h>
 
int main() 
{
    int hInicial, hFinal;
    int tempoJogo;
    scanf("%d %d", &hInicial, &hFinal);
    
    if (hInicial < hFinal) {
        tempoJogo = hFinal - hInicial;
    } else {
        tempoJogo = 24 - hInicial + hFinal;
    }
    
    printf("O JOGO DUROU %d HORA(S)\n", tempoJogo);
    return 0;
}
