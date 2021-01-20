#include <stdio.h>

/*Faça um laço “faça até” com 10 interações, verifique 
quantas vezes números múltiplos de 2 e de 3 são informados.*/

int main(int argc, char *argv[]){
    
    int num, i, dois=0, tres=0;
	
	for(i=0;i<10;i++){
        printf("Informe um número inteiro: ");
	    scanf("%i", &num);
	    
	    if(num%2==0 && num%3==0){
	        dois++;
	        tres++;
	    }else if(num%2==0){
	        dois++;
	    }else if(num%3==0){
	        tres++;
	    }
	}
	printf("Quantidade de números múltiplos de 2: %i\nQuantidade de números múltiplos de 3: %i", dois, tres);
    

	/*int i, numero, resto2, resto3, cont=0;
	for(i=0; i<10; i++){
		printf("informe um numero:");
		scanf("%i", &numero);
		resto2 = numero % 2; //modulo e o resto da divisao inteira
		resto3 = numero % 3;
		if(resto2==0 &&  resto3==0){
			cont++;
			printf("Divisivel por 2 e 3 = %i \n", numero);
		}
	}
	printf("Total de multiplos 2 e 3 = %i", cont);*/

    return 0;
}
