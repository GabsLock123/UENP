#include <stdio.h>
#define lin 5
#define col 3

int main(){

    int mat[lin][col];
    int i, j, mult;


    for ( i = 0; i < col; i++)
    {
        for (j = 0; j < lin; j++)
        {
            printf("insira os valores desejados:\n");
            scanf("%d", &mat[lin][col]);   
            
            
        }
        
    }
    if (i % 7 == 0) 
    {
    mult = ( i % 7 ==0);

    printf("os multiplos de 7 sao: %d", mult);
    }
    
    

}