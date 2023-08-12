#include <stdio.h>
#include <stdlib.h>

int main() {
   int *progI, *progII;
   int i, j, t1, t2;

   //le qtde de alunos de progI
   printf("\nInforme a quantidade de alunos de PROG I: ");
   scanf("%d", &t1);

   //aloca array com t1 elementos
   progI = (int *) malloc(t1 * sizeof(int));
   if (progI == NULL) //verifica se houve erro
      exit(1);
   

   printf("\n\t.... TURMA PROG I ....\n");
   for (i=0; i < t1; i++) {
      printf("Entre com a matricula do aluno [%d]: ", i+1);
      scanf("%d", &progI[i]);
   }

   //le qtde de alunos de progII
   printf("\nInforme a quantidade de alunos de PROG II: ");
   scanf("%d", &t2);
   //aloca array de t2 elementos
   progII = (int *) malloc(t2 * sizeof(int));
   if (progII == NULL) //verifica se houve erro
      exit(1);

   printf("\n\t.... TURMA PROG II ....\n");
   for (i=0; i < t2; i++) {
      printf("Entre com a matricula do aluno [%d]: ", i+1);
      scanf("%d", &progII[i]);
   }

   printf("\n\t.... ALUNOS EM PROG I e PROG II... \n");
   for (i=0; i < t1; i++) {
      for (j=0; j < t2; j++) {
         //verifica quem esta matriculado em ambas disciplinas
         if (progI[i] == progII[j])
         printf("%d ", progII[j]);
      }
   }

   free(progI);
   free(progII);
   return 0;
}