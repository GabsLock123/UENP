/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define TAM 5

int main()
{
    int i;
    float catalogo[TAM];
    float *p = catalogo;
    
    for(i=1; i<TAM; i++){
        printf("Digite o preço atual do produto %d: ", i);
        scanf("%f", &p[i]);
    }
    
    for(i=1; i<TAM; i++){
        p = &catalogo[i];
        *p += *p * 0.1;
        printf("\nPreço ajustado do produto %d: %.2f", i, *p);
    }
    
    return 0;
}
