#include <stdio.h>
/*Crie um algoritmo onde será informado um valor inteiro inicial, e um 
laço o usuário deverá informar outro número inteiro, o programa deverá 
responder se o número atual é menor ou maior que o número inicial informado, 
o laço somente será interrompido quando o número atual for igual ao número 
anterior informado. Exiba quantas tentativas foram necessárias para que o 
número fosse descoberto.*/

int main(int argc, char *argv[])
{
    int numInicio = 13, numAtual = 0, contador = 0;
    printf("Descubra o número que está escondido!\n");
    do{
        printf("Digite um número inteiro: ");
        scanf("%i", &numAtual);
        
        if(numInicio!=numAtual){
            
            if(numAtual > numInicio){
                printf("\nErrou, o número é menor, tente novamente!\n");
                
            }else{
                printf("\nErrou, o número é maior, tente novamente!\n");
                
            }
        } 
        contador++;
    }while(numAtual!=numInicio);
    
    printf("\nCorreto! O número certo era: %i\nTotal de Tentativas: %i", numInicio, contador);

    return 0;
}
