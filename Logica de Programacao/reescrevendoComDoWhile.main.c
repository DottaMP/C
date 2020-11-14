#include <stdio.h>
/*Dado o algoritmo abaixo escrito em C : 
    int i, a, b, r; 
    for(i=0; i<20; i++) {    
    scanf("%d",&a);     
    scanf("%d",&b);    
    r = a + b;    
    printf("%d\n", r); }
Reescreva com o laço faça enquanto (do while)*/

int main(int argc, char *argv[])
{
    int i=0, a, b, r; 
    
    do {
        scanf("%d",&a);     
        scanf("%d",&b);    
        r = a + b;    
        printf("%d\n", r);
        i=i+1;
    } while(i<20);

    return 0;
}

