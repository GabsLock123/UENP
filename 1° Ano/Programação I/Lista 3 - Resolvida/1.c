#include <stdio.h>
#include <stdlib.h>

int main()
{
   int multiplicador, multiplicando, resultado;

   for(multiplicador=1; multiplicador<=10; multiplicador++){
    printf("tabuada do numero %d:\n", multiplicador);

        for(multiplicando=1; multiplicando<=10; multiplicando++){
            resultado = multiplicador * multiplicando;
                printf("%d * %d = %d\n", multiplicador, multiplicando, resultado);}
    }
    return 0;

}


