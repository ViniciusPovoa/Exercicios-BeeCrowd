#include <stdio.h>

int main() {
    
    int NUMERO, HORAS;
    float VALORPHORA;
    scanf("%d", &NUMERO);
    scanf("%d", &HORAS);
    scanf("%f", &VALORPHORA);
    float SALARIO = HORAS * VALORPHORA;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", NUMERO, SALARIO);
    return 0;
}
