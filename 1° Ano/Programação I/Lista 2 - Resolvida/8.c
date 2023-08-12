#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;
    float reajuste;
    int cargo;

    printf("digite seu salario: ");
    scanf("%f", &salario);

    printf("digite 1 para vendedor, 2 para auxiliar de escritorio, 3 para auxiliar de enfermagem e 4 para bibliotecario: ");
    scanf("%d", &cargo);

    switch(cargo)
    {
    case 1:
        reajuste = salario + (salario * 0.1);
        printf("o novo salario e de: %.2f", reajuste);
        break;

    case 2:
        reajuste = salario + (salario * 0.07);
        printf("o novo salario e de: %.2f", reajuste);
        break;

    case 3:
        reajuste = salario + (salario * 0.12);
        printf("o novo salario e de: %.2f", reajuste);
        break;

    case 4:
        reajuste = salario + (salario * 0.11);
        printf("o novo salario e de: %.2f", reajuste);
        break;
    }
}
