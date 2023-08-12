#include <stdio.h>
#include <string.h>
#define TAM 50
#define TAM2 50

int main (){

    char strg[TAM], strg2[TAM2];
    int i=0,j;

    printf("insira a frase:\n");
    gets(strg);
    
    fgets(strg,TAM,stdin);
    strcpy (strg2, strg);
    strrev(strg2);
    
    i = strcmp(strg, strg2);

    if (i == 0)
    {
        printf("\n eh palindroma\n", strg);  
    }

    else{
        printf("\n nao eh palindroma\n", strg2);
    } 
    

}