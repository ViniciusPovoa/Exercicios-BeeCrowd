#include <stdio.h>

int main()
{
    int X;
    float Y;
    scanf("%d", &X);
    scanf("%f", &Y);
    float media = X / Y;
    printf("%.3f km/l\n", media);
    return 0;
}