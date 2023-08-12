#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maior(int a, int b, int c){
    if (a > b && a > c){
        return a;
    }

    if (b > a && b > c){
        return b;
    }

    if (c > a && c > b){
        return c;
    }
}


int main()
{
    int a, b, c;
    int maiorNumero;

    printf("insira os valores de a, b e c: ");
    scanf("%d%d%d", &a, &b, &c);

    maiorNumero = maior(a, b, c);

    printf("o maior numero e %d", maiorNumero);
}
