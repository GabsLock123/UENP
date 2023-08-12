#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

struct cadastro{
    char nome[30];
    char genero[20];
    char modo[15];
    char plataforma[40];
    int ranking;
};

void cadastroJogos(struct cadastro *j, int tam){
    for(int i=0; i<tam; i++){
        fgets(j[i].nome, 30, stdin);
        fgets(j[i].genero, 20, stdin);
        fgets(j[i].modo, 15, stdin);
        fgets(j[i].plataforma, 40, stdin);
        scanf("%d", j[i].ranking);
        setbuf(stdin, NULL);
    }
}

void exibeGenero(struct cadastro *j, int tam){
    char opcao[20];
    fgets(opcao, 20, stdin);
    for(int i=0; i<tam; i++){
        if(strcmp(opcao, j[i].genero)==0){
            printf("Nome:.........%s\n", j[i].nome);
            printf("Genero:.......%s\n", j[i].genero);
            printf("Modo:.........%s\n", j[i].modo);
            printf("Plataforma:...%s\n", j[i].plataforma);
            printf("Ranking:......%d\n", j[i].ranking);
            printf("\n");
        }
    }
}

void exibePorRanking(struct cadastro j[], int tam){
    int opcao;
    scanf("%d", &opcao);
    setbuf(stdin, NULL);
    for(int i=0; i<tam; i++){
        if(j[i].ranking == "s"){
            printf("%d", j[i].ranking);
        }
    }
}

void ehFavorito (struct cadastro *j, int tam){
    char opcao[30];
    fgets(opcao, 30, stdin);
    for (int i=0; i<tam; i++){
        if(strcmp(opcao, j[i]. nome)==0){
            printf("É um dos favoritos");
        }
        else{
            printf("Não é um dos favoritos");
        }
    }
}

int main()
{
    
    int op;
    int jogos;
    
    struct cadastro j[MAX];
    
    cadastroJogos(jogos, MAX);
    
    do{
        printf("Selecione uma opção:\n");
        printf("1. cadastro Jogos\n");
        printf("2. exibe PorRanking\n");
        printf("3. exibe Genero\n");
        printf("4. exibe Favoritos\n");
        printf("0. Sair\n");
        scanf("%d", &op);
        setbuf(stdin, NULL);
        
        switch(op){
            case 1: cadastroJogos(jogos, MAX);
            break;
            
            case 2: exibePorRanking(jogos, MAX);
            break;
            
            case 3: exibeGenero(jogos, MAX);
            break;
            
            case 4: ehFavorito(jogos, MAX);
            break;
            
            case 0:
            break;
            
            default: ("op invalida");
            break;
        }
    }while (op!=0);
    
}
