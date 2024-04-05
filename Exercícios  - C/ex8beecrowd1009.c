#include <stdio.h>

int main() {
    
    char NOMEVENDEDOR[10];
    double SALARIOFIXO, VALORVENDAS;

    scanf("%s", NOMEVENDEDOR);
    scanf("%lf", &SALARIOFIXO);
    scanf("%lf", &VALORVENDAS);

    double TOTALVENDAS = VALORVENDAS * 0.15;
    double SALARIOFINAL = SALARIOFIXO + TOTALVENDAS;
    printf("TOTAL = R$ %.2lf\n", SALARIOFINAL);
    return 0;
}
