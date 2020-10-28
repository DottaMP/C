#include <stdio.h>
/*Elabore um algoritmo que gere e escreva os números ímpares dos números entre 100 e 200.*/

int main(int argc, char *argv[]){
    
    int i;
		
		for(i=100; i<=200; i++){
			if(i%2!=0)
			{
				printf("%i,", i);
			}
		}
	
    return 0;
}
