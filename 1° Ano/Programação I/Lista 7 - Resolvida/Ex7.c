#include <stdio.h>
#include <string.h>

int main() {

	char nome[255];
	int i, tam;

	gets(nome);

	tam = strlen(nome);

	for (i=1; i <= tam; i++)
	{
		printf("%.*s\n",i,nome);
	}

	return 0;
}
