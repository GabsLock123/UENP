/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define MAX 50

int main()
{
    int n, i, funcionarios[50];
    float imposto;
    
    printf("Quantos funcionarios serao analisados?: ");
    scanf("%d", &n);
    
    for (i=1; i<=n; i++){
        printf("\ndigite o salario do funcionario %d: ", i);
        scanf("%d", &funcionarios[i]);
        
        if(funcionarios[i] <= 1904){
            imposto = 0;
        }
        
        else if(funcionarios[i] <= 2827){
            imposto = funcionarios[i] * 0.075;
        }
        
        else if(funcionarios[i] <= 3751){
            imposto = funcionarios[i] * 0.15;
        }
        
        else if(funcionarios[i] <= 4665){
            imposto = funcionarios[i] * 0.225;
        }
        
        else if(funcionarios[i] > 4665){
            imposto = funcionarios[i] * 0.275;
        }
        
        printf("o imposto de renda a ser pago pelo funcionario %d e: %.2f", i, imposto);
    }
}
