#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;

    printf("digite tres numeros: ");
    scanf("%d%d%d", &x, &y, &z);

    if (x==y && y==z){
        printf("1\n");
}
    else if (x!=y && y!=z){
    printf("2\n");
}
    else{
        printf("3\n");
}

}


