#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 20


int main() {

    int vet[MAX]; 
    int i, n, count;
    
    printf("Quantos numeros serao informados?: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        printf("\ndigite o %d° valor: ", i);
        scanf("%d", &vet[i]);
        
        if(vet[i] > 10 || vet[i]< 50){
            count++;
        }
        
    }
    printf("Existem %d valores entre 10 e 50", count);

}