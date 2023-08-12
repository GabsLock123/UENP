#include <stdio.h>
#include <stdlib.h>
int main(){
    int a, maior=0, menor=0;
    float Numeros[10];

    printf("digite 10 valores: ");
    printf("\n");
    
    for (a=0;a<10;a++){
        
      printf("Numero %d : ", a+1);
      scanf("%f", &Numeros[a]);
      if(a==0){
        maior=Numeros[a];
        menor=Numeros[a];
          
      }
    
      if(Numeros[a]>maior){
        maior=Numeros[a];
      }
      
      else{
        if(Numeros[a]<menor){
            menor=Numeros[a];
        }
      }
    }
    printf("\no maior valor é %d\n", maior);
    printf("\ne o menor valor é %d\n\n", menor);
    
    return 0;
}