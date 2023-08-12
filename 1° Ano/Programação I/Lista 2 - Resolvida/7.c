#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo, quantidade;
    float total, total1, total2, total3, total4;

    printf("ditite o codigo do produto 1, 2, 3 ou 4: ");
    scanf("%d", &codigo);

    if (codigo==1){
        if (quantidade>=15){
            printf("o total a pagar e %.2f", quantidade *5.30 -((quantidade * 5.30) * 15/100));
        }
        else if(quantidade*5.30>=40){
            printf("o total a pagar e %.2f", quantidade * 5.30 -((quantidade * 5.30) * 15/100));
        }
        else{
        printf("o total a pagar e %.2f", quantidade * 5.30);
        }

    else if (codigo==2){
        if (quantidade>=15){
            printf("o total a pagar e %.2f", quantidade *6.00 -((quantidade *6.00)* 15/100));
        }
        else if (quantidade * 6.00>=40){
            printf("total a pagar e %.2f", quantidade *6.00 -((quantidade*6.00) * 15/100);)
        }
        else{
            printf("o total a pagar e %.2f", quantidade * 6.00);
        }
}
    else if (codigo==3){
        if (quantidade>=15){
            printf("o total a pagar e %.2f", quantidade * 3.20 -((quantidade * 3.20) * 15/100));
        }
        else if(quantidade * 3.20 >=40){
            printf("o total a pagar e %.2f", quantidade * 3.20 -((quantidade * 3.20) * 15/100));
        }
        else{
            printf("total a pagar e %.2f", quantidade * 3.20);
        }
}
    else{
        if (quantidade>=15){
            printf("total a pagar e %.2f", quantidade * 2.50 -((quantidade * 2.50) * 15/100));
        }
        else if (quantidade * 2.50 >=40){
            printf("total a pagar %.2f", quantidade * 2.50 -((quantidade * 2.50) * 15/100));
        }
        else{
            printf("o total a pagar e %.2f", quantidade 2.50);
        }
    }
}
