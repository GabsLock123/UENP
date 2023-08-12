#include <stdio.h>
#include <string.h>

struct registro {
    int num_passagem;
    int dia, mes, ano;
    char origem[20];
    char destino[50];
    int horario;
    int poltrona;
    int idade;
    char nome[50];
};
void registrando (struct registro *onibus, int tam){
    int i; 
        for (i = 0; i < tam; i++){
            printf("\n");
            printf("\nColoque o numero da passagem ou -1 para terminar o registro: \n");
            scanf("%d", &onibus[i].num_passagem);
            setbuf(stdin, NULL);
                if(onibus[i].num_passagem == -1){
                    printf("\nEntrada terminada\n");
                }
            printf("\nDigite a data da passagem: \n");
            printf("\nDIA\n");
            scanf("%d", &onibus[i].dia);
            setbuf(stdin, NULL);
            printf("\nMES\n");
            scanf("%d", &onibus[i].mes);
            setbuf(stdin, NULL);
            printf("\nANO\n");
            scanf("%d", &onibus[i].ano);
            setbuf(stdin, NULL);
            printf("\nDigite a origem: \n");
            fgets (onibus[i].origem, 20, stdin);
            printf("\nDigite o destino: \n");
            fgets (onibus[i].destino, 50, stdin);
            printf("\nDigite o horario: \n");
            scanf("%d", &onibus[i].horario);
            setbuf(stdin, NULL);
            printf("\nDigite a poltrona: \n");
            scanf("%d", &onibus[i].poltrona);
            setbuf(stdin, NULL);
            printf("\nDigite a idade do passageiro: \n");
            scanf("%d", &onibus[i].idade);
            setbuf(stdin, NULL);
            printf("\nDigite o nome do passageiro: \n");
            fgets(onibus[i].nome, 50, stdin);
        }
}
void le_registro(struct registro *onibus, int tam){
    int i;
        for(i=0; i < tam; i++){
            printf("\n____________________________________________________\n");
            printf("\nNumero da passagem ------- %d\n", onibus[i].num_passagem);
            printf("\nData -------- %d/%d/%d \n", onibus[i].dia, onibus[i].mes, onibus[i].ano);
            printf("\nOrigem ------- %s\n", onibus[i].origem);
            printf("\nDestino ------- %s\n", onibus[i].destino);
            printf("\nHorario ------- %d\n", onibus[i].horario);
            printf("\nPoltrona -------- %d\n", onibus[i].poltrona);
            printf("\nIdade do passageiro ------- %d\n", onibus[i].idade);
            printf("\nNome do passageiro ------- %s\n", onibus[i].nome);
        }
}
void mediaGeral (struct registro *onibus, int tam){
    int i, soma;
    soma = 0;
        for(i = 0; i < tam; i++){
            soma += onibus[i].idade;
        }
    int media = soma /tam;
        for (i = 0; i < tam; i++){
            if (onibus[i].idade > media && onibus[i].poltrona % 2 == 0){
                printf("\nO passageiro que esta acima da media de idade e em poltronas pares eh: %s\n", onibus[i].nome);
            }
        }
}
int main (){
    struct registro onibus[2];

    printf("\n....Faca o registro....\n");
    registrando (onibus, 2);
    printf("\n\t....Exibindo os dados registrados....\n");
    le_registro(onibus, 2);

    printf("\n\t....Media geral das idades....\n");
    mediaGeral (onibus, 2);

}