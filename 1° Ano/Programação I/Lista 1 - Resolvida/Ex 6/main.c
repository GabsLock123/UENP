#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quilometros;
    int combustivelGasto;
    int consumoMedio;

    printf("insira a dist�ncia percorrida em quilometros:\n");
    scanf("%d", &quilometros);

    printf("insira o a quantidade gasta em L de combust�vel de no percurso:\n");
    scanf("%d", &combustivelGasto);

    consumoMedio = (quilometros + combustivelGasto) / 2;

    printf("O consumo medio foi de:\n" "%d\n", consumoMedio);
    return 0;
}
