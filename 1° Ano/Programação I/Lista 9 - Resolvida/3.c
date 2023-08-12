#include <stdio.h>
#include <string.h>
#define MAX 100

struct cadastro{
    int idade;
    char sexo;
    int QuantFotos;
    char estado;
    int QuantAmigos;
    char nome[100];
};

void leDadosPersonagem(struct cadastro a[], int tam){
    for (int i=0; i<tam; i++){
        setbuf(stdin, NULL);
        printf("insira o nome do usuário: ");
        fgets(a[i].nome, 20, stdin);
        printf("insira a idade do usuário: ");
        scanf("%d", &a[i].idade);
        setbuf(stdin, NULL);
        printf("insira o sexo (digite M para masculino e F para feminino): ");
        scanf("%c", &a[i].sexo);
        setbuf(stdin, NULL);
        printf("insira a quantidade de amigos do usuário: ");
        scanf("%d", &a[i].QuantAmigos);
        setbuf(stdin, NULL);
        printf("insira o estado civil do usuário (digite S para solteiro(a), C para casado(a), N para namorando e D para divorciado(a)): ");
        scanf("%c", &a[i].estado);
        printf("insira a quantidade de fotos no perfil do usuário: ");
        scanf("%d", &a[i].QuantFotos);
    }
}

void exibeDadosPersonagem(struct cadastro a[], int tam){
    for(int i=0; i<tam; i++){
        printf("____________________________________");
        printf("\nIdade do usuario: %d", a[i].idade);
        printf("\nSexo do usuário: %c", a[i].sexo);
        printf("\nNome do usuário: %s", a[i].nome);
        printf("Quantidade de fotos publicadas pelo usuário: %d\n", a[i].QuantFotos);
        printf("Estado civil do usuário: %c\n", a[i].estado);
        printf("Quantidade de amigos do usuário: %d\n", a[i].QuantAmigos);
        printf("____________________________________");
        
    }
}


int main()
{
    struct cadastro a[2];
    float resultado;
    
    leDadosPersonagem(a, 2);
    exibeDadosPersonagem(a, 2);
}
