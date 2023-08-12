/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define LIM 500
 
int main(){
  int n,i;
  int vet[LIM];
 
  printf("Entre com n: ");
  scanf("%d", &n);
  printf("Entre com %d elementos: ",n);
  
  for(i = 0; i < n; i++){
    scanf("%d", &vet[i]);
  }
  
  printf("Ordem inversa: ");
  
  for(i = n-1; i >= 0; i--){
    printf("%d ",vet[i]);
  }
  
  printf("\n");
  
  return 0;
}
