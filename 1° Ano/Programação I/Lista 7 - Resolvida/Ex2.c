#include<stdio.h>
#include<string.h>
#define TAM 50

int main(){
    char f[TAM];
    int i,n;
    printf("Digite a frase:\n");
    fgets(f,TAM,stdin);
    i=strlen(f);
    for(n=0;n<=i;n++)
    {
        if((f[n]=='A') ||(f[n]=='a')|| (f[n]=='E')|| (f[n]=='e') || (f[n]=='I') || (f[n]=='i') || (f[n]=='O') || (f[n]=='o') || (f[n]=='U') || (f[n]=='u')){
            f[n] ='*';
        }
    }
    for(n=0;n<=i;n++)
    {
    printf("Frase criptografada: %s", f);
    }
    return(0);
}