#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int a, fim = 19, copia, vetor[20];

    
    for(a = 0; a < 20; a++){
        printf("digite %d: ", a);
        scanf("%d", &vetor[a]);
    }

    
    printf("\nVetor original: ");
    for(a = 0; a < 20; a++){
        printf("%2d ", vetor[a]);
    }

    
    for(a = 0; a < 10; a++){
        copia = vetor[a];
        vetor[a] = vetor[fim];
        vetor[fim] = copia;
        fim--;
    }

    
    printf("\nVetor modificado: ");
    for(a = 0; a < 20; a++){
        printf("%2d ", vetor[a]);
    }

    return 0;
}