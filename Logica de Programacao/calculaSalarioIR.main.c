/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
/*  Desenvolva um programa em C do problema a seguir (2,5): Utilizando comandos de seleção aninhados, 
faça o cálculo do salário líquido através de um salário bruto informado seguindo as devidas regras:
•	Primeiro deduzir o INSS de 11% do salário bruto antes de verificar a faixa do IR
•	Faixa de R$ 1,00 a R$ 1020,00 Isento de IR
•	Faixa de R$ 1020,01 a R$ 2.500,00 7% de taxa de IR
•	Faixa de R$ 2500,01 a R$ 3.800,00 15% de taxa de IR
•	Faixa de R$ 3800,01 e acima, 27.5% de taxa de IR
•	Salário Líquido = (Salário bruto – INSS) – IR
 */

int main(int argc, char *argv[]){
   float salarioDeduzido, salarioLiq, salarioBruto, inss, ir;
   
	printf("Informe o seu salário bruto: R$ ");
	scanf("%f",&salarioBruto);
	
	salarioDeduzido = salarioBruto - (salarioBruto*0.11);
	inss = salarioBruto*0.11;
	
	if (salarioDeduzido >=1.00 && salarioDeduzido <= 1020.00){
	    
	    ir = salarioDeduzido * 0.00;
	    salarioLiq = (salarioBruto - inss)-ir;
	    printf("Isento de IR: R$ %.2f;\nINSS: R$ %.2f;\nSalário Bruto: R$ %.2f;\nSalário Liquído: R$ %.2f.", ir, inss, salarioBruto, salarioLiq);
	    
	}else {
	    if(salarioDeduzido >1020.00 && salarioDeduzido <= 2500.00){
	        
	        ir = salarioDeduzido * 0.07;
	        salarioLiq = (salarioBruto - inss)-ir;
	        printf("7%% de taxa de IR: R$ %.2f;\nINSS: R$ %.2f;\nSalário Bruto: R$ %.2f;\nSalário Liquído: R$ %.2f.", ir, inss, salarioBruto, salarioLiq);
	        
	    }else{
	        if(salarioDeduzido >2500.00 && salarioDeduzido <= 3800.00){
	            ir = salarioDeduzido * 0.15;
	            salarioLiq = (salarioBruto - inss)-ir;
	            printf("15%% de taxa de IR: R$ %.2f;\nINSS: R$ %.2f;\nSalário Bruto: R$ %.2f;\nSalário Liquído: R$ %.2f.", ir, inss, salarioBruto, salarioLiq);
	            
	        }else{
	                ir = salarioDeduzido * 0.275;
	                salarioLiq = (salarioBruto - inss)-ir;
	                printf("27.5%% de taxa de IR: R$ %.2f;\nINSS: R$ %.2f;\nSalário Bruto: R$ %.2f;\nSalário Liquído: R$ %.2f.", ir, inss, salarioBruto, salarioLiq);
	       }
	    }
	}
    return 0;
}
