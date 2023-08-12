#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idFuncionario;
    int horasTrabalhadas;
    int valorHora;
    int Salario;

    printf("Insira o id do funcionario:\n");
    scanf("%d", &idFuncionario);

    printf("insira o numero de horas trabalhadas:\n");
    scanf ("%d", &horasTrabalhadas);

    printf("insira o valor em reais da hora trabalhada:\n");
    scanf("%d", &valorHora);

    Salario = valorHora * horasTrabalhadas;

    printf("dados completos do funcionario: \n%d\n%d\n%d\n%d\n", idFuncionario, horasTrabalhadas, valorHora, Salario);
    return 0;
}
