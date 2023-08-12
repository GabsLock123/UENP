#include<stdio.h>
#include<string.h>

int main(){

    char string1[100],string2[100];

    printf("\nEntre com a primeira string: ");
    gets(string1);
    printf("\nEntre com a segunda string: ");
    gets(string2);

    if (strlen(string1)==strlen(string2)){

        if (!strcmp(string1,string2))
        printf("\nAs strings sao iguais!\n");
    }
    else{
        strcat(string1,string2);
        puts (string1);
    }
}