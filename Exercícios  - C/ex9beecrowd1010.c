#include <stdio.h>

int main() {
    
    int CODIGOPECAS1, NUMEROPECAS1, CODIGOPECAS2, NUMEROPECAS2;
    double VALORUNITARIO1, VALORUNITARIO2;

    scanf("%d %d %lf", &CODIGOPECAS1, &NUMEROPECAS1, &VALORUNITARIO1);
    scanf("%d %d %lf", &CODIGOPECAS2, &NUMEROPECAS2, &VALORUNITARIO2);
    
    double VALORPAGAR1 = NUMEROPECAS1 * VALORUNITARIO1;
    double VALORPAGAR2 = NUMEROPECAS2 * VALORUNITARIO2;
    double VALORTOTAL = VALORPAGAR1 + VALORPAGAR2;
    printf("VALOR A PAGAR: R$ %.2lf\n", VALORTOTAL);
    return 0;
}
