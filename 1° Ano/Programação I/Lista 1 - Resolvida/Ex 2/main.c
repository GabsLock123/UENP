#include <stdio.h>
#include <stdlib.h>

int main()
{
 int dinheiro, troco;
 printf("entre com a quantia em dinheiro:");
 scanf("%d", &dinheiro);
 troco = dinheiro%7;
 printf("troco: %d\n", troco);
 return 0;
}
