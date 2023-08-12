#include <stdio.h>
#include <stdlib.h>

int main(){
int vezes, num, i, maior = 0, menor;

    printf ("Quantos numeros voce quer inserir?: ");
    scanf ("%d", &vezes);

    for (i = 1; i <= vezes; i++){
        printf ("Insira um numero: ");
        scanf ("%d", &num);
        if (num > maior){
            maior = num;
        }
        if (num < menor){
            menor = num;
        }




    }
    printf ("O menor numero e o %d e o maior e o %d", menor, maior);

}

