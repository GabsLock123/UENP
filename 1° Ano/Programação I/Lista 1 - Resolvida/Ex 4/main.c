#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dolar;
    float real;

    printf("Insira o valor em dolar a ser convertido:");
    scanf("%f", &dolar);
    real = dolar * 4.87;
    printf("o valor em reais e de: %.2f", real);
    return 0;
}
