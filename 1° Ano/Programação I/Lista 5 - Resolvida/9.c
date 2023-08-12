#include <stdio.h>

    int media(float numeros[], int n){
      float media, soma = 0;
      int i;
    
        for(i =0; i<n; i++){
        soma = soma + numeros[i];
        }
      media = (float) soma/n;
    
      return media;
    }
    
    int calculovariancia(float numeros[], int n){
      float variancia;
      float media, soma = 0;
      int i;
    
    for(i =0; i<n; i++){
        soma = soma + numeros[i];
      }
    media = (float) soma/n;
    variancia += (numeros[i]-media)*(numeros[i]-media);
    return variancia;
    }
    
    int acimaMedia(float numeros[], int n){
      float media, soma = 0;
      int i, count;
    
        for(i =0; i<n; i++){
        soma = soma + numeros[i];
        }
      media = (float) soma/n;
      
      if (numeros[i]>media){
          count++;
      }
      return count;
    }
    
    int main(){
      float vetor[6] = {3.0, 4.3, 5.6, 2.8, 7.9, 3.4};
      float resultado1, resultado2, resultado3, resultado4;
    
      resultado1 = media(vetor, 6);
      resultado2 = calculovariancia(vetor, 6);
      resultado3 = acimaMedia(vetor, 6);
      printf("A media dos vetores e de %.2f\n", resultado1);
      printf("A variancia dos vetores e de %.2f\n", resultado2);
      printf("o(s) numero(s) acima da media e(são): %2.f", resultado3);
    }