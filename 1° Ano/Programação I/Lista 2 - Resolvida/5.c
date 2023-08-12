#include <stdio.h>

int main (){

    char tipo;
    int consumo, percurso;

    printf("tipo do carro: <A, B ou C>: ");
    scanf("%c", &tipo);

    printf ("Percurso em KM:");
    scanf("%d", &percurso);

    switch (tipo) 
    {
    case'A': 
            consumo = percurso /15;
            printf ("consumo estimado: %.2d", consumo);
            break;
    case'B':
            consumo = percurso/ 12;
            printf ("consumo estimado: %.2d", consumo);
            break;
    case 'C':
            consumo = percurso /10;
            printf ("consumo estimado: %.2d", consumo);
    default:
        break;
    }
}












