/*Crie dois vetores de 10 posições de números inteiros, colete os 
valores através das interações de um laço, e outro laço armazene no 
segundo laço os valores em ordem inversa do índice.*/
#include <stdio.h>

int main(int argc, char *argv[]){
    int x[10], y[10], i;
    
    for(i=0; i<10; i++){
        printf("Informe o %iº número: ", i+1);
        scanf("%i", &x[i]);
    }
    
    printf("\nValores em ordem inversa do índice:\n");
    for(i=9; i>=0; i--){
        y[i] = x[i];
        printf("%i\n", y[i]);
    }
    return 0;
}
