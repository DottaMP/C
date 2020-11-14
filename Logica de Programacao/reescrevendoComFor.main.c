#include <stdio.h>

/*Dado o algoritmo abaixo escrito em C:
int x = 10; 
while(x>0) {   
    printf("%d",x);   
    x--; }
Reescreva com o laço faça até (for)*/

int main(int argc, char *argv[])
{
    int x = 10; 
    for(x; x>0; x--){
        printf("%d",x);
    }

    return 0;
}

