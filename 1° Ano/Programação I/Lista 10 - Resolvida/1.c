
#include <stdio.h>
#include <stdlib.h>

int* somaVetores(int *VetX, int *VetY, int n){
    int i, *soma;
    
    soma = (int *) malloc (n * sizeof(int));
    if (soma == NULL){
        printf("erro na alocação de memória");
        exit(1);
    }
    
    for (i=0; i<n; i++){
        soma[i] = VetX[i] + VetY[i];
    }
    return soma;
}

void preencherVetor(int vet[], int n){
    int i;
    for (i=0; i<n; i++){
        printf("Entre com o valor do vetor[%d]: ", i+1);
        scanf("%d", &vet[i]);
    }
}

int main()
{
    int n, i;
    
    printf("digite o tamanho dos vetores: ");
    scanf("%d", &n);
    
    int VetX[n], VetY[n];
    printf("___preenchendo o vetor VetX___\n");
    preencherVetor(VetX, n);
    
    printf("___preenchendo o vetor VetY___\n");
    preencherVetor(VetY, n);
    
    int *soma;
    printf("___Exibindo soma dos vetores___\n");
    soma = somaVetores(VetX, VetY, n);
    
    for (i = 0; i<n; i++){
        printf("%d", *(soma+i));
    }
}
