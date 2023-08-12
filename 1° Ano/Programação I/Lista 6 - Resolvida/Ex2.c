#include <stdio.h>
#include <stdlib.h>
#define LIN 4
#define COL 5

int main() {
    int mat [LIN] [COL];
    int vet [COL];
    int i, j;
    int maior = 0;

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
        printf("Digite o valor da posicao %d, %d: \n", i, j);
        scanf ("%d", &mat [i] [j]);
        }
    }
    printf("\n\n\n");
    printf("*************  Maiores valores de cada coluna  ******************* \n\n\n");
    for (j = 0; j < COL; j++)
    {
        for (i = 0; i < LIN; i++)
        {
          if (mat [i] [j] > maior)
            {
            maior = mat [i] [j];
            }
        }
    vet [j] = maior;
    }
    for (i = 0; i < COL; i++)
    {
      printf("%d  ", vet[i]);
    }
      
          printf("\n\n\n");
        
 }