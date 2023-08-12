#include <stdio.h>
  

void count(char* str){
    int vogal = 0;
  
    int i;
    char c;
  
    for (i = 0; str[i] != '\0'; i++) {
  
        c = str[i];

        if (c == 'a' || c == 'e'
            || c == 'i' || c == 'o'
            || c == 'u' || c == 'A'
            || c == 'E' || c == 'I'
            || c == 'O' || c == 'U')
            vogal++;

        else if (c == ' ')
            continue;
  
       
    }
  
    
    printf("\nVogais: %d", vogal);
}
  
int main(){
    char* str[0] = n;
    int n;

    printf("insira a frase:\n");
    scanf("%d", &n);

    printf("String: %s", str);
  
    count(str);
  
    return 0;
}