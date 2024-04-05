#include <stdio.h>

int main() {
    double valor;
    int centavos;
    
    scanf("%lf", &valor);
    
    centavos = (int)(valor * 100);
    
    int notas[6] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[6] = {100, 50, 25, 10, 5, 1};
    
    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        int qtd_notas = centavos / notas[i];
        printf("%d nota(s) de R$ %.2f\n", qtd_notas, notas[i] / 100.0);
        centavos %= notas[i];
    }
    
    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        int qtd_moedas = centavos / moedas[i];
        printf("%d moeda(s) de R$ %.2f\n", qtd_moedas, moedas[i] / 100.0);
        centavos %= moedas[i];
    }
    
    return 0;
}
