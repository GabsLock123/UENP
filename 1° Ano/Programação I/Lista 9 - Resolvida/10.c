#include <stdio.h>

#define MAX 100

#define MASCULINO 'm'
#define FEMININO 'f'
#define AZUL 'a'
#define VERDE 'v'
#define CASTANHO 'c'
#define LOIRO 'l'
#define PRETO 'p'

struct dados {
    char sexo[2];
    char cor_olhos[3];
    char cabelo_cor [2];
    int idade;
};
struct habitante_info {
    int mais_velho;
    float mulher_percentual;
};
void dados_habitantes (struct dados *h, int tam){
    int i;
        for (i = 0; i < tam; i++){
            printf("\nDigite a idade: \n");
            scanf ("%d", &h[i].idade);
            setbuf(stdin, NULL);
            if (h[i].idade != -1){
                printf("\nDigite o sexo <F ou M>, Cor dos olhos <A, V, C> e a cor do cabelo <L ou P>: \n");
                scanf("%c%c%c", &h[i].sexo, &h[i].cor_olhos, &h[i].cabelo_cor);
                setbuf(stdin, NULL);
            }
        }
}
void habitante_idades (struct dados *h, struct habitante_info *p, int tam){
    int i;
    int quantidade_mulheres = 0;

    p[i].mais_velho = -1;
        for (i = 0; i < tam; i++){
            if(h[i].idade > p[i].mais_velho){
                p[i].mais_velho = h[i].idade;
            }
            if (h[i].sexo == FEMININO && h[i].idade >= 18 && h[i].idade <= 35 && h[i].cabelo_cor == LOIRO && h[i].cor_olhos == VERDE){
                quantidade_mulheres++;
            }
        }
    p[i].mulher_percentual = (quantidade_mulheres/tam)*4;
}
int tam (){
    struct dados h[MAX];
    struct habitante_info p[MAX];
    int i =0;
        
    printf ("\n....Registro....\n");
    dados_habitantes(h, 4);
    printf("\n...Resposta....\n");
    habitante_idades(h, p, 4);

	printf("Mais velho: %d\n", p[i].mais_velho);
	printf("Mulheres com olhos verdes, loiras com 18 a 35 anos: %.2f\n", p[i].mulher_percentual);

	return 0;
}