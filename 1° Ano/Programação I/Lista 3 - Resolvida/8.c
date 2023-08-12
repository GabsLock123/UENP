#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade, numero, soma = 0;
    float media;

    printf("digite a quantidade de numeros: ");
    scanf("%d", &quantidade);

    for(int i = 1; i <= quantidade; i++){
        printf("digite um numero: ");
        scanf("%d", &numero);
        soma += numero;
    }
    media = soma / quantidade;
    printf("a media e: %.2f", media);
    return 0;
}
