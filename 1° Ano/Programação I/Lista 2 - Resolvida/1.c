#include <stdio.h>


int main(){

    int a, b, c, menor;
    scanf ("%d%d%d", &a, &b, &c);

    if (a < menor) {
        menor = a;  }
    

    if (b < menor) {
        menor = b;  }

    if (c< menor) {
        menor = c;  }

    printf ("menor: %d", menor);
    
        return 0;
    
}