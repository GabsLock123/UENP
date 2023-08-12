#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, quantidade, maior = 0, menor = 0;

    printf("quantas pessoas serao analisadas?: ");
    scanf("%d", &quantidade);

    for (int i = 1; i <= quantidade; i++){
        while (idade != 0){
            printf("digite a idade: ");
            scanf("%d", &idade);

            if(idade <18 && idade > 0){
                menor++;
            }
            else if(idade > 30){
                maior++;
            }
    }
    printf("sao %d pessoas menores de 18 anos e %d pessoas maiores de 30 anos.", menor, maior);
}
}
