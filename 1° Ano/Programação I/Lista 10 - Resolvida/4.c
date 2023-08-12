#include <stdio.h>
#include <stdlib.h>

int main() {
  int **mat1, **mat2, **soma;
  int i, j, l,c;
  //le as dimensoes da matriz
  printf("Entre com as dimensoes da matriz (l, c):\n");
  scanf("%d %d", &l, &c);

   //aloca um vetor de ponteiros - linhas - mat1
   mat1 = (int **) malloc (l * sizeof(int *));
   if (mat1 == NULL) //verifica se houve erro 
      exit(1);
   //percorre as linha do vetor de ponteiros
   for (i=0; i < l; i++) {
      //aloca um vetor de inteiros para cada posicao do vetor - colunas
      mat1[i] = (int *) malloc(c * sizeof(int));
      if (mat1[i] == NULL) //verifica se houve erro
         exit(1);
   }

  printf("Lendo matriz 1...\n");
  for (i=0; i<l; i++) {
    for (j=0; j<c; j++)
      scanf("%d", &mat1[i][j]);
  }

     //aloca um vetor de ponteiros - linhas - mat2
   mat2 = (int **) malloc (l * sizeof(int *));
   if (mat2 == NULL) //verifica se houve erro 
      exit(1);
   //percorre as linha do vetor de ponteiros
   for (i=0; i < l; i++) {
      //aloca um vetor de inteiros para cada posicao do vetor - colunas
      mat2[i] = (int *) malloc(c * sizeof(int));
      if (mat2[i] == NULL) //verifica se houve erro
         exit(1);
   }
  printf("Lendo matriz 2...\n");
  for (i=0; i<l; i++) {
    for (j=0; j<c; j++)
      scanf("%d", &mat2[i][j]);
  }

     //aloca um vetor de ponteiros - linhas - mat1
   soma = (int **) malloc (l * sizeof(int *));
   if (soma == NULL) //verifica se houve erro 
      exit(1);
   //percorre as linha do vetor de ponteiros
   for (i=0; i < l; i++) {
      //aloca um vetor de inteiros para cada posicao do vetor - colunas
      soma[i] = (int *) malloc(c * sizeof(int));
      if (soma[i] == NULL) //verifica se houve erro
         exit(1);
   }

  //percorre e soma seus elementos
  for (i=0; i<l; i++) {
    for (j=0; j<c; j++)
      soma[i][j] = mat1[i][j] + mat2[i][j];
  }

  printf("Soma das matrizes..\n ");
  for (i=0; i<l; i++) {
    for (j=0; j<c; j++)
      printf("%d ", soma[i][j]);
    printf("\n");
  }

  for(i = 0; i < l; i++)
    free(mat1[i]);
  free(mat1);

  for(i = 0; i < l; i++)
    free(mat2[i]);
  free(mat2);

  return 0;
}