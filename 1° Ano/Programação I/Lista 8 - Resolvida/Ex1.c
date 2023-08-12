/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int negativo (int *vet, int tam){
    
    int count = 0;
    
    for (int i=0; i<tam; i++){
        if(*(vet+i)<0){
            count++;
        }
    }
    return count;
}

int main()
{
    int vet[5] = {10, -2, -4, 3, 1};

    printf("%d", negativo(vet, 5));
}
