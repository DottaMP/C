/*Faça um programa que receba 30 números inteiros e 
verifique qual a maior sequência de números múltiplos de três*/
#include <stdio.h>

int main(int argc, char *argv[]){
    int i, numero, seq=0, maiorSeq=0;
	for(i=0; i<10; i++){
		printf("Informe um numero:");
		scanf("%i", &numero);

		if(numero%3==0) { 
			seq++; 
			if(seq > maiorSeq){
				maiorSeq = seq;	
			}	
		} else {
			seq = 0;
		}
	}
	printf("A maior sequencia foi de = %i", maiorSeq);

    return 0;
}

