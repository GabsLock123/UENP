#include <stdio.h>


int main() {

    int matriz[3][4], i, j;

    for (i=0;i<3;i++) {
        for (j=0;j<4;j++) {
        printf ("\nEntre com o elemento[%d][%d]=",i+1,j+1);
        scanf ("%d",&matriz[i][j]); } }
        printf ("\n Matriz Principal \n");

    for (i=0;i<3;i++) {
        for (j=0;j<4;j++) {
        printf ("\n Valor: %d",matriz[i][j]); }}
        printf ("\n \n Matriz Modificada \n");

    for (i=0;i<3;i++) {
        if (matriz [i][j]<0) {
        matriz[i][j]=0;}
        printf ("\n Valor: %d",matriz[i][j]); }

 }
getch();
 
