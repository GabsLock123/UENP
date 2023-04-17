#include <stdio.h>
#include <string.h>
#define MAX 100

struct  cadastro{
    int telefone;
    char nome[100];
    char endereco[100];
    float preco;
};

void leDadosLoja(struct cadastro a[], int tam){
    for (int i=0; i<tam; i++){
        printf("insira o número de telefone da loja: ");
        scanf("%d", &a[i].telefone);
        setbuf(stdin, NULL);
        printf("insira o nome da loja: ");
        fgets(a[i].nome, 100, stdin);
        printf("insira o endereço da loja: ");
        fgets(a[i].endereco, 100, stdin);
        printf("insira o preço do produto: ");
        scanf("%f", &a[i].preco);
        setbuf(stdin, NULL);
    }
}

void exibeDadosLoja(struct cadastro a[], int tam){
    for(int i=0; i<tam; i++){
        printf("____________________________________");
        printf("\ntelefone da loja: %d", a[i].telefone);
        printf("\nNome da loja: %s", a[i].nome);
        printf("Endereço da loja: %s", a[i].endereco);
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
    struct cadastro a[2];
    float resultado;
    
    leDadosLoja(a, 2);
    exibeDadosLoja(a, 2);
    resultado = mediaGeral(a, 2);
    printf("\nMedia geral: %.2f\n", resultado);
    exibeMenorPreco(a, 2);
    
    
    
}
