#include <stdio.h>
#define MAX 5

float multiplos7(int vet[MAX], int i, int n){
    int count;
    
    printf("Quantos numeros serao analisados?: ");
    scanf("%d", n);
    
    for(i=1; i<=n; i++){
        printf("digite o %d° numero: ");
        scanf("%d", vet[i]);
    }
    
    if(vet[i]%7==0){
        count++;
    }
    
    return count;
}

int main(){
    
    int vet[MAX];
    int i, n;
    float multiplosDe7;
    
    multiplosDe7 = multiplos7(vet[MAX], i, n);
    
    printf("sao %d numeros multiplos de 7", multiplosDe7);
        

}