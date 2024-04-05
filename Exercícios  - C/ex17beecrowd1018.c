#include <stdio.h>
#include <math.h>


int main()
{
    
int valorLido;
scanf("%d", &valorLido);
printf("%d\n", valorLido);

printf("%d nota(s) de R$ 100,00\n", valorLido/100);
valorLido = valorLido % 100; 
printf("%d nota(s) de R$ 50,00\n", valorLido/50);
valorLido = valorLido % 50;
printf("%d nota(s) de R$ 20,00\n", valorLido/20);
valorLido = valorLido % 20;
printf("%d nota(s) de R$ 10,00\n", valorLido/10);
valorLido = valorLido % 10;
printf("%d nota(s) de R$ 5,00\n", valorLido/5);
valorLido = valorLido % 5;
printf("%d nota(s) de R$ 2,00\n", valorLido/2);
valorLido = valorLido % 2;
printf("%d nota(s) de R$ 1,00\n", valorLido/1);
valorLido = valorLido % 1;
return 0;
}