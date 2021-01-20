/*Preencher um vetor com números inteiros 20 posições; solicitar 
que o usuário informe um número. Pesquisar se esse número existe 
no vetor. Se existir, imprimir em qual posição do vetor e qual a 
ordem foi digitado. Se não existir, imprimir MSG que não existe. */
#include <stdio.h>

int main(int argc, char *argv[]){
    int i, pesq, aux=0, num[20];

    for (i=0;i<20;i++){
        printf("Digite o valor da posição [%i] do vetor: ", i);
        scanf("%i",&num[i]);
    }
    printf("Digite o valor que deseja procurar no vetor: ");
    scanf("%i",&pesq);

    for (i=0;i<20;i++){
        if (pesq==num[i]){
            printf("O valor foi encontrado na posição [%i] do vetor.", i);            
        }else{
            aux=aux+1;
        }
    }
   
    if (aux>=20){
        printf("\nO valor não foi encontrado.");
    }
    
    return 0;
}
