#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char strg[50];
    int i,c, conta=0;

    printf("insira a frase\n");
    gets(strg);

    c = strlen(strg);

    printf("Numero de letras = %d", c);

    for(i=0;strg[i]!= '\0'; i++ ) {

        if((strg ==' ') || (strg == '\n')) {

        conta++;
        }

    printf("\nconta = %d", conta);
    }

    return 0;
}