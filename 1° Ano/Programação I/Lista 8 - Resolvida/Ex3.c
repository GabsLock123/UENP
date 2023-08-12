/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void maiorNum(int *vet, int tam, int *maior){
    int i;
    *maior = *vet;
    for(i = 1; i < tam; i++){
        if(*maior < *(vet + i)){
            *maior = *(vet+i);
        }
    }
}

int main()
{
    int maior, vet[3] = {40, 980, 3};
    
    maiorNum(vet, 3, &maior);
    printf("Maior: %d\n", maior);
    
    return 0;
    
}
