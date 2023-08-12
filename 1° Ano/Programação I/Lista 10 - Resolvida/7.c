#include<stdio.h>
#include<stdlib.h>

typedef struct bancoDados {
	int codigo;
	char titulo[50];
	char autor[50];
	char assunto[50];
} livros;

//funcao para cadastrar livros
void inserirLivro(livros *livro, int quant) {
	for(int i = 0; i < quant; i++) {
		scanf("%d", &livro[i].codigo);
		getchar();
      	fgets(livro[i].titulo, 50, stdin);
      	fgets(livro[i].autor, 50, stdin);
   	 	fgets(livro[i].assunto, 50, stdin);
  	}
}
//funcao para procurar livro pelo codigo
int buscarLivro(int cod, livros *livro, int quant) {
	for(int i=0; i< quant; i++) {
		if (cod == livro[i].codigo)
			return 1;
	}
	return 0;
}
//funcao para exibir livros cadastrados
void exibirLivro (livros livro) {
   printf("Codigo...........: %d\n", livro.codigo);
   printf("Titulo...........: %s", livro.titulo);
   printf("Autor............: %s", livro.autor);
   printf("Assunto..........: %s", livro.assunto);
   printf("\n");
}

int main() {
	livros *livro;
   	int i, quant, codigo, resultado;
   	//le quant de livros a cadastrar
   	scanf("%d",&quant);
   	//aloca um vetor de struct de acordo com quant
   	livro = (livros *) malloc (quant * sizeof(livros));
   	if (livro == NULL) 
   		exit(1);
   	//chama funcao de cadastro
   	inserirLivro(livro, quant); 
   	//percorre o vetor de struct e exibe os livros cadastrados
   	for(i=0; i < quant; i++)
      	exibirLivro(livro[i]);
    //busca livro pelo codigo
	printf("Informe o codigo do livro que deseja procurar: ");
	scanf("%d", &codigo);
	 //chama funcao de busca
	resultado = buscarLivro(codigo, livro, quant);
	if (resultado == 1) 
		printf("Livro Encontrado!\n");
	else
		printf("Livro não Encontrado!\n");
	//libera memoria alocada
	free(livro);
  return 0;
}