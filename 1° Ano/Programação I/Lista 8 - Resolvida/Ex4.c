/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void achar(int *vet, int tam, int *menor, int *maior){
    int i;
    *menor = *vet;
    *maior = *vet;
    for(i = 0; i < tam; i++){
        if(*menor > *(vet + i)){
            *menor = *(vet + i);
        }
        if(*maior < *(vet + i)){
            *maior = *(vet + i);
        }
    }
}

int main()
{
    int menor, maior, vet[3] = {3, 8, 64};
    
    achar(vet, 3, &menor, &maior);
    printf("Menor: %d\tMaior: %d\n", menor, maior);
    
}
