#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 50

struct  cadastro{
    char nome[50];
    float nota;
    char sobrenome[50];
};

void leDadosAluno(struct cadastro a[], int tam){
    for (int i=0; i<tam; i++){
        setbuf(stdin, NULL);
        printf("insira o nome do aluno: ");
        fgets(a[i].nome, 50, stdin);
        printf("insira o sobrenome do aluno: ");
        fgets(a[i].sobrenome, 50, stdin);
        printf("insira a nota do Aluno: ");
        scanf("%f", &a[i].nota);
        setbuf(stdin, NULL);
    }
}

void exibeDadosAluno(struct cadastro a[], int tam){
    for(int i=0; i<tam; i++){
        printf("\nNome do aluno: %s%s", a[i].nome, a[i].sobrenome);
        printf("Nota do aluno: %.2f", a[i].nota);
        
        if(a[i].nota >= 7){
            printf("\naprovado\n");
        }
        else if(a[i].nota >= 4){
            printf("\nExame\n");
        }
        else{
            printf("\nReprovado\n");
        }
    }
}

float mediaGeral(struct cadastro a[], int tam){
    float soma = 0;
    for(int i=0; i<tam; i++){
        soma+=a[i].nota;
    }
    return soma/tam;
}

void exibeMaiorNota(struct cadastro a[], int tam){
    float maior = 0;
    int aux;
    for(int i=0; i<tam; i++){
        if(a[i].nota>maior){
            maior = a[i].nota;
            aux = i;
        }
    }
    printf("\nAluno com maior nota: %s%s", a[aux].nome, a[aux].sobrenome);
}

int main()
{
    struct cadastro *a;
    float resultado;
    int n;
    
    printf("quantos alunos serao cadastrados?: ");
    scanf("%d", &n);
    
    a = (struct cadastro *) malloc (n * sizeof(struct cadastro));
    if (a == NULL){
        printf("--ERRO DE ALOCAÇÃO--");
        exit(1);
    }
    
    leDadosAluno(a, n);
    exibeDadosAluno(a, n);
    resultado = mediaGeral(a, n);
    printf("\nMedia geral: %.2f\n", resultado);
    exibeMaiorNota(a, n);
    
    
    
}
