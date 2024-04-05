#include <stdio.h>

int main() {
    int valorLido;
    scanf("%d", &valorLido);

    int minutos = 0;
    int segundos = 0;

    segundos = valorLido % 60;
    minutos = valorLido / 60;

    int horas = 0;
    if (minutos >= 60) {
        horas = minutos / 60; 
        minutos = minutos % 60; 

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
    }
}   
