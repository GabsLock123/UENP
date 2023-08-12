#include <stdio.h>
#include <stdlib.h>

int main()
{
   float Total;
   float totalComDezPorcento;

   printf("insira o custo total dos alimentos:");
   scanf("%f", &Total);

   totalComDezPorcento = Total + (Total * 0.10);

   printf("o valor total com 10 porcento e de:" "%f\n", totalComDezPorcento);
   return 0;
}
