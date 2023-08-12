#include <stdio.h>
#include <string.h>
#define MAX 50

struct  cadastro{
    int matricula;
    char nome[50];
    float nota;
};

void leDadosAluno(struct cadastro a[], int tam){
    for (int i=0; i<tam; i++){
        printf("insira o número de matrícula do aluno: ");
        scanf("%d", &a[i].matricula);
        setbuf(stdin, NULL);
        printf("insira o nome do aluno: ");
        fgets(a[i].nome, 50, stdin);
        printf("insira a nota do Aluno: ");
        scanf("%f", &a[i].nota);
        setbuf(stdin, NULL);
    }
}

void exibeDadosAluno(struct cadastro a[], int tam){
    for(int i=0; i<tam; i++){
        printf("\nMatricula: %d", a[i].matricula);
        printf("\nNome do aluno: %s", a[i].nome);
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
    printf("\nAluno com maior nota: %s", a[aux].nome);
}

int main()
{
    struct cadastro a[2];
    float resultado;
    
    leDadosAluno(a, 2);
    exibeDadosAluno(a, 2);
    resultado = mediaGeral(a, 2);
    printf("\nMedia geral: %.2f\n", resultado);
    exibeMaiorNota(a, 2);
    
    
    
}
