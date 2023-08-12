#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, produto;

    while (numero > 0){
        printf("digite um numero (digitar 0 encerra): ");
        scanf("%d", &numero);

        if(numero % 2 == 0){
            produto *= numero;
        }
    }
    printf("o produto dos numeros pares e: %d", produto);
}
