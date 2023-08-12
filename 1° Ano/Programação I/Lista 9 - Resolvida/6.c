#include <stdio.h>
#include <string.h>
#define MAX 50

struct dados{
    int idade;
    int altura;
    int peso;
    char nome[50];
};

void leDadosAluno(struct dados a[], int tam){
    for (int i=0; i<tam; i++){
        printf("insira o nome do aluno: ");
        fgets(a[i].nome, 50, stdin);
        printf("insira a idade do aluno: ");
        scanf("%d", &a[i].idade);
        setbuf(stdin, NULL);
        printf("insira a altura do aluno: ");
        scanf("%d", &a[i].altura);
        printf("insira o peso do aluno: ");
        scanf("%d", &a[i].peso);
        setbuf(stdin, NULL);
    }
}

void exibeMaiorPeso(struct dados a[], int tam){
    float maior = 0;
    int aux;
    for(int i=0; i<tam; i++){
        if(a[i].peso>maior){
            maior = a[i].peso;
            aux = i;
        }
    }
    printf("\nAluno com maior peso: %s", a[aux].nome);
}

void exibeMaisNovo(struct dados a[], int tam){
    float menor = 0;
    int aux1;
    for(int i=0; i<tam; i++){
        if(a[i].idade<menor){
            menor = a[i].idade;
            aux1 = i;
        }
    }
    printf("\nAluno mais novo: %s", a[aux1].nome);
}

int main()
{
    struct dados a[2];
    
    leDadosAluno(a, 2);
    exibeMaiorPeso(a, 2);
    exibeMaisNovo(a, 2);
    
    
}
