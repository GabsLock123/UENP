#include <stdio.h>
#include <stdlib.h>
#define linhas 2
#define colunas 2

int checainteiro(int matriz[][colunas], int num, int ord)//Retorna 1 caso o numero ocorra, do contrario, retorna 0
{
    int *p;

    p=&matriz[0][0];

    if(*(p+ord-1)==num)
    {
        return 1;
    }
    else if(*(p+ord-1)!=num);
    {
        return (checainteiro(matriz, num, ord-1));
    }
    if(*(p+ord-1)!=num && (ord-1)==0)
    {
        return 0;
    }
}


int main()
{
    int matriz[4][4];
    int num;
    int i, j;

    printf("\n----Construcao da Matriz----\n\n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("Elemento[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n----Construcao da Matriz----\n\n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("Elemento[%d][%d] = %d ", i, j, matriz[i][j]);

        }
        printf("\n");
    }



    printf("Digite um inteiro para checar sua ocorrencia na matriz: ");
    scanf("%d", &num);

    if((checainteiro(matriz,num, 4*4))==1)
    {
        printf("O numero %d ocorre na matriz!\n", num);
    }
    else
    {
        printf("O numero nao %d ocorre na matriz!\n", num);
    }

    return 0;
}