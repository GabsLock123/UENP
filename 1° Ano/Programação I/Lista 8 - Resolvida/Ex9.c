/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void CopiarString(char *copiar, char *colar){
    
    while(*copiar != '\0'){
        *copiar = *colar;
        copiar++;
        colar++;
        
    }
}

int main()
{
    char string1[] = "Nao gosto de programar!";
    char string2[20] = "Gosto de programar!";
    
    CopiarString(string1, string2);
    printf("%s\n", string2);
    
    getchar();
    
}
