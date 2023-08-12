#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, x1, x2, delta;

    printf ("digite os coeficientes da equacao (a,b,c): \n");

    scanf ("%f%f%f", &a, &b, &c);
    
    //qnd n eh equacao de 2 grau
    if (a == 0){
        printf("Nao eh equacao de 2 grau\n");           }

    else {//b² + 4ac
        delta = pow (b,2) - (4 * a * c);
            (delta < 0); {
                printf("Nao existem raizes reais\n"); }

    else {// calcular raizes
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        printf ("x1 = %.2f\nx2 = %.2f\n", x1, x2);
         }
         }

        
    


}