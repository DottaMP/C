#include <stdio.h>

/*Faça um laço que calcule a média de todos os números informados, 
a condição de término do laço é quando for digitado ZERO.*/

int main(int argc, char *argv[])
{   
    int num, contador=0;
    float media=0;
	
	while(num!=0){
	    printf("Informe um número inteiro: ");
	    scanf("%i", &num);
	    
	    if(num!=0){
	        media=media+num;
	        contador = contador+1;
	    }
    }
	media = media/contador;
	printf("Média: %2.2f ", media);
    
    return 0;
}

