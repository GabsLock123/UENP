#include <stdio.h>
#include <stdlib.h>

int tempo (int mes, int dia) {

if ( mes == 8 & dia == 21 ) {
    return primavera;
}
if (mes == 12 & dia == 21) {

    return verão;
}
if (mes == 3 & dia == 21 ) {

    return outono;
}
if ( mes == 8 & dia == 21 ) {

    return inverno;
}
}

int main (){

int mes, dia,  estacao;
printf("insira o dia e o mes: ");
scanf ("%d%d"; &mes, &dia);

estacao = tempo (dia, mes);
printf(" sua estaao eh: %d", estacao);
return 0;

}
