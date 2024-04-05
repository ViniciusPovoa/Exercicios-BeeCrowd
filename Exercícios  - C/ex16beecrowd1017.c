#include <stdio.h>
#include <math.h>

int main()
{
float xHoras, yVelocidadeMedia;

scanf("%f", &xHoras);
scanf("%f", &yVelocidadeMedia);

float calculo = (xHoras * yVelocidadeMedia) / 12;

printf("%.3f\n", calculo);
return 0;
}