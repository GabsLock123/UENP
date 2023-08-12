#include <stdio.h>


int main(){

    int nl, nc;
    printf ("\nEntre com o numero de linhas da matriz = ");
    scanf ("%d",&nl);
    printf ("\nEntre com o numero de colunas da matriz = ");
    scanf ("%d",&nc);

     int matriz[nl][nc], i, j;

    for (i=0;i<nl;i++)
    {
        for (j=0;j<nc;j++)
        {
        printf ("\nEntre com o elemento[%d][%d]=",i+1,j+1);
         scanf ("%d",&matriz[i][j]); 
        } 
    }



    for (i=0;i<nl;i++) {
        printf("\n |"); 
        for (j=0;j<nc;j++){
            printf (" %d ",matriz[i][j]);
            printf("|");
    }   }
}    