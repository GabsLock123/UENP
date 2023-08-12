#include <stdio.h>
#include <stdlib.h>

int main()
{
    int altura, idade;
    int brinquedos;

    printf("Digite a altura em centimetros:\n");
    scanf("%d", &altura);

    printf("\nDigite a idade:\n");
    scanf("%d", &idade);

    if(altura>=150 && idade>=12){
        brinquedos+=1;}

    if(altura>=140 && idade>=14){
        brinquedos+=1;}

    if(altura>=170 || idade>=16){
        brinquedos+=1;}

    printf("Total de brinquedos: %d", brinquedos);
    return 0;
}

