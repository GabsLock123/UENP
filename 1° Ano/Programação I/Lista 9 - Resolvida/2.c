/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

struct calculo{
    int x1;
    int x2;
    int y1;
    int y2;
};

float calculaDistancia (struct calculo a, int x1, int x2, int y1, int y2){
    float calculodistancia;
    
    calculodistancia = sqrt(pow(x1, 2) - pow(x2, 2) + pow(y1, 2) - pow(y2, 2));
    
    return calculodistancia;
}

int main()
{
    struct calculo a;
    float calculodistancia;
    int x1, x2, y1, y2;
    
    printf("digite os valores de x1, x2, y1 e y2: ");
    scanf("%d%d%d%d", &x1, &x2, &y1, &y2);
    
    calculodistancia = calculaDistancia(a, x1, x2, y1, y2);
    
    printf("o resultado é: %d", calculodistancia);

    return 0;
}
