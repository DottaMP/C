/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

/*A Secretaria de Meio Ambiente que controla o índice de poluição mantém 3 grupos de
indústrias que são altamente poluentes do meio ambiente. O índice de poluição aceitável 
varia de 0,05 até 0,25. Se o índice sobe para 0,3 as indústrias do 1º grupo são intimadas 
a suspenderem suas atividades, se o índice crescer para 0,4 as industrias do 1º e 2º grupo 
são intimadas a suspenderem suas atividades, se o índice atingir 0,5 todos os grupos devem 
ser notificados a paralisarem suas atividades. Faça um algoritmo em C que leia o índice de 
poluição medido e emita a notificação adequada aos diferentes grupos de empresas.*/

int main(int argc, char *argv[]){

    float nivel;
	
	printf("Informe seu nível de poluição: ");
	scanf("%f",&nivel);
	
	if (nivel < 0.3){
		printf("Nível de poluição aceitável!");
		
	}else if (nivel >= 0.3 && nivel < 0.4){
		printf("Suspender atividade do grupo 1!");
		
	}else if (nivel >= 0.4 && nivel < 0.5){
		printf("Suspender as atividades dos grupos 1 e 2!");
		
	}else if (nivel >= 0.5){
		printf("Suspender a atividade de todos os grupos!");
		
	}
	
    return 0;
}


