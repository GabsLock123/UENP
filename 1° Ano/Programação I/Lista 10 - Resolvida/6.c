/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int** alocaMatriz(int n){
    int **matriz, i;
    
    matriz = (int **) calloc (n, sizeof(int *));
    if (matriz == NULL){
        printf("--ERRO DE ALOCAÇÃO DE MEMÓRIA--");
        exit(1);
    }
    
    for(i=0; i<n; i++){
        matriz[i] = (int *) calloc (n, sizeof(int));
        if(matriz[i] == NULL){
            printf("--ERRO DE ALOCAÇÃO--");
            exit(1);
        }
    }
    return matriz;
}

int** PreencheMatriz(int n){
    int **matriz, i, j;
    
    matriz = alocaMatriz(n);
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if (i+j == n-1){
                matriz[i][j] = 1;
            }
            
        }
    }
    return matriz;
}

void** exibeMatriz(int **matriz, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("\t %d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main()
{
  int n;
  int i, j;
  
  printf("entre com a dimensão da matriz (n): \n");
  scanf("%d", &n);
  
  int **matriz = PreencheMatriz(n);
  
  printf("\tMATRIZ RESULTANTE: \n");
  exibeMatriz(matriz, n);
  
  return 0;
}
