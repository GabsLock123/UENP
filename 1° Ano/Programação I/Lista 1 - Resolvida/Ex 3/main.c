#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, x, y;
    int somaMN;
    int somaXY;
    int diferenca;

    printf("digite os valores de m e n: \n");
    scanf("%d%d", &m, &n);
    somaMN = m + n;

    printf("digite os valores de x e y: \n");
    scanf("%d%d", &x, &y);
    somaXY = x + y;
    diferenca = (somaMN - somaXY);

    printf("Resultado: %.2d\n", diferenca);
    return 0;
}
