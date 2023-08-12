#include <stdio.h>
#include <stdlib.h>
//funcao faz a busca do numero pelo codigo
int buscaNumero(int numero, int **array, int linha, int coluna) {
	int i, j;
	for (i=0; i<linha; i++) {
		for (j=0; j<coluna; j++) {
			if (numero == array[i][j])
				return 1;
		}
	}
	return 0;
}

int main() {
	int **matriz, linha, coluna, i, j;
	int elemento, resultado;

	//le dimensoes da matriz
	printf("Informe as dimensões da matriz (l, c): ");
	scanf("%d%d", &linha, &coluna);
	
	//aloca linhas da matriz
	matriz = (int**) malloc(linha * sizeof(int*));
	if (matriz == NULL) 
		exit(1);

	//aloca colunas
	for (i=0; i < linha; i++) {
		matriz[i] = (int*) malloc(coluna * sizeof(int));
		if (matriz[i] == NULL)
			exit(1);
	}

	//lendo elementos
	for (i=0; i<linha; i++) {
		for (j=0; j<coluna; j++) {
			printf("Entre com o elemento [%d %d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	//busca elemento na matriz
	printf("Entre com o elemento a ser buscado: \n");
	scanf("%d", &elemento);
	resultado = buscaNumero(elemento, matriz, linha, coluna);
	if (resultado = 1) 
		printf("Elemento Encontrado!\n");
	else
		printf("Elemento não Encontrado!\n");
	//liberando memoria alocada
	for (i=0; i<linha; i++) 
		free(matriz[i]);
	free(matriz);
	return 0;
}