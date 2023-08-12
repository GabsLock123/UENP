#include <stdio.h>

int main (){

    int a, b, c, media;
    int total = 0;

    scanf ("%d%d%d", &a, &b, &c);

    media = (a+b+c)/3;

    if (a>media){ 
        total ++; }

    if (b>media){
        total ++;}
    
    if (c>media){  
        total++; }
    
    printf ("%d", total);

    return 0;
    
        

}