#include <stdio.h>
/*Faça um algoritmo que implemente um laço que leia X números inteiros e identifique qual o menor o 
maior e a média, quando o número informado for zero, interrompa o laço e exiba os valores.*/

int main(int argc, char *argv[]){
    int num, contador=1, acumulador=0, maior, menor;
    float media;
	
	while(num!=0){
        printf("Informe um número inteiro: ");
	    scanf("%i", &num);
        
        if(num==0){
            contador = contador-1;
            break;
            
        }else if (contador==1){
	        maior = num;
	        menor = num;
	        
	    }else if(num>maior){
	            maior = num;
	        
	    }else if(num<menor){
	            menor = num;
	        
	    }
	    
	    acumulador = acumulador + num;
	    contador = contador+1;
    }
    
	media = acumulador/contador;
	
	printf("Maior número: %i\nMenor número: %i\nMédia: %2.f ", maior, menor, media);
    
    return 0;
}

