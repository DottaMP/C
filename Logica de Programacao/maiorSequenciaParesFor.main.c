#include <stdio.h>
/*Crie um laço e verifique qual a maior sequência de 
números pares informados, o laço fará 10 iterações.
Ex: 1,2,3,4,6,8,5,3,2,5   Sequência: 4,6,8   
O programa vai retornar: 3*/

int main(int argc, char *argv[]){
    
    int num, numAnterior=0, maiorSequencia=1;
    
    for (int i = 0; i < 10; i++) { 
        printf("Informe um numero:"); 
        scanf("%i", &num); 
        
        if (num%2==0) { 
            if(i==0){
                maiorSequencia-=1;
            }
            if (num==numAnterior+2) { 
                maiorSequencia+=1; 
            } 
        } 
        numAnterior=num;
    }   
    printf("Maior sequencia de pares informado: %i", maiorSequencia);
    
    return 0;
}

