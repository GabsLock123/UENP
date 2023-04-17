#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quilometros;
    int combustivelGasto;
    int consumoMedio;

    printf("insira a distancia percorrida em quilometros:\n");
    scanf("%d", &quilometros);

    printf("insira o a quantidade gasta em L de combustivel no percurso:\n");
    scanf("%d", &combustivelGasto);

    consumoMedio = quilometros / combustivelGasto;

    printf("O consumo medio foi de:\n" "%d Km/Litro\n", consumoMedio);
    return 0;
}
