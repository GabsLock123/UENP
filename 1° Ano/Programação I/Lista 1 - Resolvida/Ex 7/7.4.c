#include <stdio.h>
#include <stdlib.h>

int main()
{
    int questaoA;
    int a, b, c;
    int resultado;


    printf("insira o valor de a:\n");
    scanf("%d", &a);

    printf("insira o valor de b:\n");
    scanf("%d", &b);

    printf("insira o valor de c:\n");
    scanf("%d", &c);

    resultado = (a*b*c)*(a*b*c)*(a*b*c)/3;
    printf("O resultado e:\n" "%d\n", resultado);
    return 0;
}
