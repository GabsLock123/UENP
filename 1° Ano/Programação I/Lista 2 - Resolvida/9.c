#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    int conta;
    int operacao;

    printf("digite os valores para x e y, sendo x maior que y: ");
    scanf("%d%d", &x, &y);

    printf("digite 1 para calcular a media aritmetica entre x e y, 2 para calcular a diferenca do maior pelo menor, 3 para calcular o produto de x e y e 4 para realizar a divisao: ");
    scanf("%d", &operacao);

    switch(operacao)
    {
    case 1:
        conta = (x+y)/2;
        printf("o resultado da media e de: %d", conta);
        break;

    case 2:
        conta = x - y;
        printf("a diferenca e de: %d", conta);
        break;

    case 3:
        conta = x * y;
        printf("o produto de x e y e: %d", conta);
        break;

    case 4:
        conta = x / y;
        printf("o resultado da divisao de x por y e: %d", conta);
        break;
    }
}
