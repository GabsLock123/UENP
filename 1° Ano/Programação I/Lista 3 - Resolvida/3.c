#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s=0;
    int num, div;

    num = div = 1;

    while(div<=50){
        s = s + (float)num/div;
        num = num+2;
        div++;}

    printf("\nS=%f\n", s);

    return 0;
}
