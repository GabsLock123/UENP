#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculaIMC(float peso, float altura){
    return peso / (pow (altura, 2));
}


int main()
{
    float peso;
    float altura;
    float imc;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura em metros: ");
    scanf("%d", &altura);

    imc = calculaIMC(peso, altura);

    if (imc < 18.5){
        printf("Voce se encontra abaixo do peso normal.");
    }

    else if (imc >= 18.5 || imc <= 24.9){
        printf("Voce se encontra dentro do peso normal");
    }

    else if (imc >=30){
        printf("voce esta obeso");
    }
    return 0;
}
