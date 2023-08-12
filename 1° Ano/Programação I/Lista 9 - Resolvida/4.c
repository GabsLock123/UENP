#include <stdio.h>
#include <string.h>
#define MAX 100

struct cadastro{
    int ID;
    int level;
    int vida;
    int ataque;
    int defesa;
    char nome[100];
};

void leDadosPersonagem(struct cadastro a[], int tam){
    for (int i=0; i<tam; i++){
        printf("insira o ID do personagem: ");
        scanf("%d", &a[i].ID);
        setbuf(stdin, NULL);
        printf("insira o level do personagem: ");
        scanf("%d", &a[i].level);
        setbuf(stdin, NULL);
        printf("insira o nome do personagem: ");
        fgets(a[i].nome, 20, stdin);
        printf("insira o índice de ataque do personagem: ");
        scanf("%d", &a[i].ataque);
        printf("insira o índice de defesa do personagem: ");
        scanf("%d", &a[i].defesa);
        printf("insira a vida do personagem: ");
        scanf("%d", &a[i].vida);
        setbuf(stdin, NULL);
    }
}

void exibeDadosPersonagem(struct cadastro a[], int tam){
    for(int i=0; i<tam; i++){
        printf("____________________________________");
        printf("\nID do personagem: %d", a[i].ID);
        printf("\nLevel do personagem: %d\n", a[i].level);
        printf("Nome do personagem: %s", a[i].nome);
        printf("Vida do personagem: %d\n", a[i].vida);
        printf("Índice de ataque do personagem: %d\n", a[i].ataque);
        printf("Índice de defesa do personagem: %d\n", a[i].defesa);
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
