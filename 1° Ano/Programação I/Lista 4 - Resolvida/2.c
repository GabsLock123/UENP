#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float CalculaDelta (float x, float y, float z){
    return (pow (y, 2) - (4*x*z));

}

float calculaX1 (float x, float y, float delta){
    return (-y + sqrt(delta)) / (2*x);
}

float calculaX2 (float x, float y, float delta){
    return (-y - sqrt(delta)) / (2*x);
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
            x1 = calculaX1(x, y, delta);
            x2 = calculaX2(x, y, delta);

            printf("os valores de X1 e X2 sao: \n%.2f\n%.2f", x1, x2);}
}
