#include <stdio.h>
#include <stdlib.h>

int main(){
int pessoas, num, i, maior30 = 0, menor18;

    printf ("Quantos pessoas serao analisadas?: ");
    scanf ("%d", &pessoas);

    for (i = 1; i <= pessoas; i++){
        printf ("Insira a idade da pessoa: ", pessoas);
        scanf ("%d", &num);
        if (num >= maior30){
            maior30++;
        }
        if (num <= menor18){
            menor18++;
        }




    }
    printf ("%d pessoa(s) sao menor(es) de 18 e %d pessoa(s) sao maior(es) de 30", menor18, maior30);

}

