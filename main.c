#include <stdio.h>
#include <stdlib.h>

int main()
{
     int numero;
     int antecessor, sucessor;
     printf("digite um numero:\n");
     scanf("%d", &numero);
     antecessor = numero - 1;
     sucessor = numero + 1;
     printf("%d \n%d", antecessor, sucessor);
     return 0;
}
