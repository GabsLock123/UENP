#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float mediaA(float n1, float n2){
    return (n1 + n2) / 2;
}

float mediaP(float n1, float n2){
    return (n1 + n2) / (2+3);
}

float mediaH(float n1, float n2){
    return (2 / (1/n1) + (1/n2));
}

int main()
{
    int nota1, nota2;
    char TipoDeMedia, A, P, H;
    float mediaAritmetica, mediaPonderada, mediaHarmonica;

    printf("digite as 2 notas: ");
    scanf("%d%d", nota1, nota2);

    printf("digite A para obter a media aritmetica, digite P para obter a media ponderada e digite H para obter a media harmonica: ");
    scanf("%c", TipoDeMedia);

    if (TipoDeMedia == A){
        mediaAritmetica = mediaA(nota1, nota2);
    }
    else if (TipoDeMedia == P){
        mediaPonderada = mediaP(nota1, nota2);
    }
    else if (TipoDeMedia == H){
        mediaHarmonica = mediaH(nota1, nota2);
    }

    else{
        printf("digite uma letra adequada");
    }
    printf("A media selecionada e de: %c", TipoDeMedia);
}
