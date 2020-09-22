/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

/*Elabore um algoritmo que dada a idade de um nadador classifique-o em uma das seguintes categorias:
Infantil A = 5 a 7 anos
Infantil B = 8 a 11 anos
Juvenil A = 12 a 13 anos
Juvenil B = 14 a 17 anos
Adultos = Maiores de 18 anos*/

int main(int argc, char *argv[]){

    int idade;
	
	printf("Digite a idade: ");
	scanf("%i",&idade);
	
	if(idade>=5 && idade <=7){
		printf("Categoria Infantil A");
		
	}else if(idade >=8 && idade <=11){
		printf("Categoria Infantil B");
		
	}else if(idade >=12 && idade <=13){
		printf("Categoria Juvenil A");
		
	}else if(idade >=14 && idade <=17){
		printf("Categoria Juvenil B");
		
	}else if(idade>=18){
		printf("Categoria Adulto");
		
	}
	
    return 0;
}


