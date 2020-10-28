#include <stdio.h>

/*Informe dois números reais e um número inteiro que represente a operação matemática a ser 
realizada (1-soma, 2-subtração, 3- multiplicação, 4-divisão) utilize o comando seleção aninhado e 
exiba o resultado da operação matemática escolhida.*/

int main(int argc, char *argv[]){

    float num1,num2,resultado;
	int opcao;
	
	printf("Entre com o primeiro número: ");
	scanf("%f",&num1);
	
	printf("Entre com o segundo número: ");
	scanf("%f",&num2);
	
	printf("\nEscolha umas das opções para resolver: 1-Soma 2-Subtração 3-Multiplicação 4-Divisão\n");
	scanf("%i",&opcao);
	
	if(opcao == 1 || opcao == 2 || opcao == 3 || opcao == 4){
	    if (opcao == 1){
	        resultado = num1 + num2;
            printf("A soma é: %.0f", resultado);
		
	    }if (opcao == 2){
	        resultado = num1 - num2;
            printf("A subtração é: %.0f", resultado);
		
	    }if (opcao == 3){
	        resultado = num1 * num2;
            printf("A multiplicação é: %.2f", resultado);
		
	    }if (opcao == 4){
	        resultado = num1 / num2;
    	    if(num2==0){
			    printf("Não existe divisão por zero!");
		    }else{
			    resultado=num1/num2;
			    printf("A divisão é: %.2f", resultado);
		    }
	    }
	}
	else{
		printf("Opção Inválida");
	}
    return 0;
}


