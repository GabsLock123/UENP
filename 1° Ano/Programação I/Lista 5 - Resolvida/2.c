/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define TAM 5

 
#include <stdio.h>
#include <stdlib.h>

int main (){
    int x[20], i, j,k, cont=0, repetido,aux;

    printf("Entre com os valores do vetor.\n");
    for(j=0;j<20;j++){
        printf("Vetor [%d]: ", j);
        scanf("%d", &x[j]);
    }
    printf("\n\n");
    
    for(i=0;i<20;i++){
        for(j=i+1;j<20;j++){
            if(x[i]>x[j]){
                aux=x[i];
                x[i]=x[j];
                x[j]=aux;
            }
        }
    }
    
    cont = 1; 
    for(i=1; i<20; i++){ 
        if(x[i] == x[i-1]){ 
            cont++;
        }
        else { 
        
            printf("O numero %d aparece %d vezes!\n", x[i-1], cont);
            
            cont = 1;
        }
    }
    printf("O numero %d aparece %d vezes!\n", x[i-1], cont);
    
    return 0;
}
