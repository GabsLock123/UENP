#include <stdio.h>
#include <stdlib.h>

int multa (int valorMulta, int velocidade) {

    if (velocidade > 50 && velocidade >=55){
        return valorMulta = 230;
    }

    else if (velocidade > 50 && velocidade >=60){
        return valorMulta = 340;
    }
}

int main ()
{
    int velocidade, valormulta;

    printf("insira a velocidade alcancada: ");
    scanf("%d", &velocidade);

    valormulta = multa(valorMulta, velocidade);

    printf("o valor da multa e de: %d", multa);
}
