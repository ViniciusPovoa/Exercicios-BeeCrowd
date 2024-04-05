#include <stdio.h>
#include <math.h>

int main() {
    
    double valorRaioEsfera;
    scanf("%lf", &valorRaioEsfera);
    double pi = 3.14159;
    double cuboRaio = pow(valorRaioEsfera, 3);
    double calculoEsfera = ((4.0/3) * pi * cuboRaio);
    printf("VOLUME = %.3f\n", calculoEsfera);
    return 0;
}
