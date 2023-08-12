#include <stdio.h>
#include <stdlib.h>

int total_brinquedos (int x, int y) {

        int z = 0;
        if (x >= 150 && y >= 12);{
            z++;
        }

        if (x >= 140 && y >= 14);{
            z++;
        }

        if (x >= 170 || y >= 16)
        {
            z++;
        }

        return z++;
    }

    int main(){

        int idade, altura, brinquedos, total;

        printf("Diga sua idade:\n");
        scanf("%d", &idade);

        printf("Diga sua altura em cm:\n");
        scanf ("%d", &altura);

        total = total_brinquedos (altura, idade);

        printf ("total de brinquedos que voce pode usar: %d", total);



    }
