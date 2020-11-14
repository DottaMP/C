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
    
    return 0;
}


