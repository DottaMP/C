/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
/*  Desenvolva um programa em C do problema a seguir: Utilizando comandos de seleção aninhados, 
identifique e calcule a comissão de um vendedor baseado no valor de venda informado:
•	0 a 100, comissão de 1%
•	101 a 200, comissão de 2%
•	201 a 300, comissão de 3%
•	301 a 400, comissão de 4%
•	Acima de 400, comissão de 5% */
int main(int argc, char *argv[]){
    
   float valorVenda, comissao;
	
	printf("Informe o valor de venda para saber qual será sua comissão: R$ ");
	scanf("%f",&valorVenda);
	
	if (valorVenda >=0 && valorVenda <= 100){
	    comissao = valorVenda * 0.01;
	    printf("Sua comissão será de 1%%, R$ %.2f", comissao);
	    
	}else {
	    
	    if(valorVenda >100 && valorVenda <= 200){
	        comissao = valorVenda * 0.02;
	        printf("Sua comissão será de 2%%, R$ %.2f", comissao);
	        
	    }else{
	        
	        if(valorVenda >200 && valorVenda <= 300){
	            comissao = valorVenda * 0.03;
	            printf("Sua comissão será de 3%%, R$ %.2f", comissao);
	            
	        }else{
	            
	            if(valorVenda >300 && valorVenda <= 400){
	                comissao = valorVenda * 0.04;
	                printf("Sua comissão será de 4%%, R$ %.2f", comissao);
	                
	            }else{
	                comissao = valorVenda * 0.05;
	                printf("Sua comissão será de 5%%, R$ %.2f", comissao);
	                
	            }
	        }
	    }
	}
    return 0;
}
