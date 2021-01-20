#include <stdio.h>
/*Crie dois vetores do tipo inteiro com a capacidade de 10 posições, 
leia números que serão armazenados sequencialmente no primeiro vetor, 
faça um novo laço que armazene no segundo vetor o valor do primeiro 
multiplicado por 2 quando o índice for par, e multiplique por 3 
quando o índice for ímpar.*/
int main(int argc, char *argv[]){
    int x[10], y[10], i;
    
    for(i=0; i<10; i++){
        printf("Informe o %iº número: ", i+1);
        scanf("%i", &x[i]);
    }
        
    for(i=0; i<10; i++){
        if(x[i]%2==0){
            y[i] = (x[i]*2);
            printf("\nO %iº número tem valor de [%i] e é par, multiplicado por 2 = %i", i+1, x[i], y[i]);
            
        }else{
            y[i] = (x[i]*3);
            printf("\nO %iº número tem valor de [%i] e é ímpar, multiplicado por 3 = %i", i+1, x[i], y[i]);
        }
    }



    /*int main(int argc, char *argv[]) {
    int vetorA[10]; //0...9
    int vetorB[10]; //0..9
    int x, resto2;
	
    for(x=0;x<10;x++){
	printf("Informe um valor:");
	scanf("%i", &vetorA[x]);
    }
    for(x=0;x<10;x++){
	resto2 = x % 2; //modulo 2 => Resto da divisao inteira
	if(resto2==0){
		vetorB[x] = vetorA[x] * 2;
	} else {
		vetorB[x] = vetorA[x] * 3;
	}
	printf("vetorA[%i]=%i vetorB[%i]=%i \n",x,vetorA[x],x,vetorB[x]);
    }*/

    return 0;
}
