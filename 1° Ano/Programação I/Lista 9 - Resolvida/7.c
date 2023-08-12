#include <stdio.h>
#include <string.h>
#define MAX 100

struct cardapio {
    int codigo_identificacao;
    char descricao_produto[MAX];
    float preco_produto;
};
void registro_cardapio (struct cardapio *r, int n){
    int i;
        for (i = 0; i < n; i++){
            printf("\nDigite o codigo de identificacao do produto: \n");
            scanf("%d", &r[i].codigo_identificacao);
            setbuf(stdin, NULL);
            printf("\nDe a descricao do produto: \n");
            fgets(r[i].descricao_produto, MAX, stdin);
            printf("\nDigite o preco do produto: \n");
            scanf("%f", &r[i].preco_produto);
            setbuf(stdin, NULL);
        }
}
void exibe_cardapio (struct cardapio *r, int n){
    int i;
            for (i = 0; i < n; i++){
            printf("\n\t__________PRODUTO - %d__________\n", i);
            printf("\nCodigo de identificacao do produto: %d\n", r[i].codigo_identificacao);
            printf("\nDescricao do produto: %s\n", r[i].descricao_produto);
            printf("\nPreco do produto: %.2f\n", r[i].preco_produto);
        }
}
float pedido_produto (struct cardapio *r, int n, int quantidade){
    int i;
    int codigo = -1;
    int op;
    float soma =0;
        while(codigo != 0){
            printf("\nDigite o codigo de identificacao para o pedido ou 0 para encerrar o pedido: \n");
            scanf("%d", &op);
    
            if(op == 0){
                printf("\nPedido encerrado\n");
                break;
            }

            printf("\nQuantidade: \n");
            scanf("%d", &quantidade);
            if(quantidade > 0) {
                for(i=0 ; i < n ; i++) { 
                    if(op == r[i].codigo_identificacao){
                        soma += (r[i].preco_produto * quantidade);
                    }
                }
            }
        }
    return soma;
}
int main (){
    struct cardapio r[MAX];
    int n, quantidade;
    printf("\nDigite a quantidade de produtos a serem cadastro: \n");
    scanf ("%d", &n);
    setbuf(stdin, NULL);

    printf("\n\t....Registro....\n");
    registro_cardapio(r, n);
    printf("\n\t....Cardapio....\n");
    exibe_cardapio(r, n);
    printf("\n\t....Pedido....\n");
    float total = pedido_produto(r, n, quantidade);
    printf("O total a pagar: R$%.2f", total);
}   