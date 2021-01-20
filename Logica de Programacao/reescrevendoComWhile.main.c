

#include <stdio.h>
/*Dado o algoritmo abaixo escrito em C : 
    int i, a, b, r; 
    for(i=0; i<20; i++) {    
    scanf("%d",&a);     
    scanf("%d",&b);    
    r = a + b;    
    printf("%d\n", r); }
Reescreva com o laço enquanto faça (while)*/

int main(int argc, char *argv[])
{    
    int i=0, a, b, r; 
    while(i<20) {    
        scanf("%d",&a);     
        scanf("%d",&b);    
        r = a + b;    
        printf("%d\n", r);
        i++;
    }
    
    return 0;
}
