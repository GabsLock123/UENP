#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float CalculaDelta (float x, float y, float z){
    return (pow (y, 2) - (4*x*z));

}

float calculaX (float x, float y, float delta, float x1, float x2){
    return x1 = (-y + sqrt(delta)) / (2*x);
    return x2 = (-y - sqrt(delta)) / (2*x);
}


int main()
{


    float x, y, z, x1, x2, delta;

    printf("digite os valores de a, b e c: ");
    scanf("%f%f%f", &x, &y, &z);

    if(x == 0){
        printf("nao e equacao de segundo grau");
    }

    else{
        delta = CalculaDelta(x, y, z);
    }

        if (x<0){
            printf("nao existem raizes");
        }

        else{
            calculaX(x, y, delta, x1, x2);

            printf("os valores de X1 e X2 sao: \n%f\n%f", x1, x2);}
}
