#include <stdio.h>

/*Dado o algoritmo abaixo escrito em C:
int x = 10; 
while(x>0) {   
    printf("%d",x);   
    x--; }
Reescreva com o laço faça enquanto (do while)*/

int main(int argc, char *argv[])
{   
    int x = 10; 
    
    do {
        printf("%d",x);   
        x--;
    }while(x>0);
    
    return 0;
}

