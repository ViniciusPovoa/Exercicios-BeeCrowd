#include <stdio.h>
#include <math.h>

void areaTriangulo(double a, double c){
   double calculoArea = (a * c) / 2;
   printf("TRIANGULO: %.3lf\n", calculoArea);
}

void areaCirculo(double c){
   double pi = 3.14159;
   double calculoArea = pi * pow(c, 2);  
   printf("CIRCULO: %.3lf\n", calculoArea);
}

void areaTrapezio(double a, double b, double c){
   double calculoArea = ((a + b) * c)/2;
   printf("TRAPEZIO: %.3lf\n", calculoArea);
}

void areaQuadrado(double b){
   double calculoArea = b * b;
   printf("QUADRADO: %.3lf\n", calculoArea);
}

void areaRetangulo(double a, double b){
   double calculoArea = a * b;
   printf("RETANGULO: %.3lf\n", calculoArea);
}


int main() {
    
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    areaTriangulo(A,C);
    areaCirculo(C);
    areaTrapezio(A, B, C);
    areaQuadrado(B);
    areaRetangulo(A, B);
    return 0;
}
