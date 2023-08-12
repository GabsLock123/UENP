#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100


struct cadastro{
    double telefone;
    char nome[100];
    float preco;
};

struct endereco{
    char rua[50];
    char bairro[50];
};

void leDadosLoja(struct cadastro a[], struct endereco b[], int tam){
    for (int i=0; i<tam; i++){
        setbuf(stdin, NULL);
        printf("insira o nome da loja: ");
        fgets(a[i].nome, 100, stdin);       
        printf("insira o número de telefone da loja: ");
        scanf("%lf", &a[i].telefone);
        setbuf(stdin, NULL);
        printf("insira a rua onde a loja se encontra: ");
        fgets(b[i].rua, 100, stdin);
        printf("insira o bairro onde a loja se encontra: ");
        fgets(b[i].bairro, 100, stdin);
        printf("insira o preço do produto: ");
        scanf("%f", &a[i].preco);
        setbuf(stdin, NULL);
    }
}

void exibeDadosLoja(struct cadastro a[], struct endereco b[], int tam){
    for(int i=0; i<tam; i++){
        printf("____________________________________");
        printf("\ntelefone da loja: %.1lf", a[i].telefone);
        printf("\nNome da loja: %s", a[i].nome);
        printf("Endereço da loja: \nRua: %sBairro: %s", b[i].rua, b[i].bairro);
        printf("Preço do produto: %.2f\n", a[i].preco);
        printf("____________________________________");
        
    }
}

float mediaGeral(struct cadastro a[], int tam){
    float soma = 0;
    for(int i=0; i<tam; i++){
        soma+=a[i].preco;
    }
    return soma/tam;
}

void exibeMenorPreco(struct cadastro a[], int tam){
    float menor = 0;
    int aux;
    for(int i=0; i<tam; i++){
        if(a[i].preco<menor){
            menor = a[i].preco;
            aux = i;
        }
    }
    printf("\nLoja com menor preco: %s\n", a[aux].nome);
}

int main()
{
    struct cadastro *a;
    struct endereco *b;
    float resultado;
    int n;
    
    printf("insira o numero de lojas a serem cadastradas: ");
    scanf("%d", &n);
    
    a = (struct cadastro *) malloc (n * sizeof(struct cadastro));
    if (a == NULL){
        printf("--ERRO DE ALOCAÇÃO--");
        exit(1);
    }
    
    b = (struct endereco *) malloc (n * sizeof(struct endereco));
    if (a == NULL){
        printf("--ERRO DE ALOCAÇÃO--");
        exit(1);
    }
    
    leDadosLoja(a, b, n);
    exibeDadosLoja(a, b, n);
    resultado = mediaGeral(a, n);
    printf("\nMedia geral: %.2f\n", resultado);
    exibeMenorPreco(a, n);
    
    
    
}
