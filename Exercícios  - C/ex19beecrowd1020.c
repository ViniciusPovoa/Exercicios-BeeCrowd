#include <stdio.h>

int main() {
    int idadeDias;
    scanf("%d", &idadeDias);

    int anos = idadeDias / 365; 
    int meses = (idadeDias % 365) / 30; 
    int dias = (idadeDias % 365) % 30; 

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}
