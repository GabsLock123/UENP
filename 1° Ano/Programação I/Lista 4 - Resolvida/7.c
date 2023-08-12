#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maior(int a, int b){
    if (a > b){
        return a;
    }

    else{
        return b;
    }
}


int main()
{
    int a, b;
    int maiorNumero;

    printf("insira os valores de a e b: ");
    scanf("%d%d", &a, &b);

    maiorNumero = maior(a, b);

    printf("o maior numero e %d", maiorNumero);
}
