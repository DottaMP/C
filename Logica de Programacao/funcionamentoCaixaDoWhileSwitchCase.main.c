#include <stdio.h>
/*Reutilizando o algoritmo do caixa eletrônico, implemente um laço faça enquanto que verifique se o 
usuário deseja continuar, caso a variável coletada for igual 1 reinicie o laço, mantendo o valor do saldo*/

int main(int argc, char *argv[]){
    int opcao;
    float saldo, saque, deposito;
    printf("Informe o valor do saldo em conta: R$ ");
    scanf("%f", &saldo);
    printf("Escolha a operação que deseja realizar: ");
	printf("\n[1] - Saldo: ");
	printf("\n[2] - Saque: ");
	printf("\n[3] - Depósito: ");
	
	do{
	    printf("\nDigite a opção desejada: ");
	    scanf("%i", &opcao);
	    switch(opcao){
	        case 1:{
	            printf("O valor do seu saldo é: R$ %2.2f\n", saldo);
	            break;
	        }
	        case 2:{
	            printf("Informe o valor para saque: R$ ");
                scanf("%f", &saque);
                if(saldo >=saque){
                    saldo = saldo - saque;
                    printf("Saque realizado com sucesso!\nSaldo Atualizado: R$ %2.2f\n", saldo);
                } else{
                    printf("Saldo Insuficiente!");
                }
	            break;
	        }
	        case 3:{
	            printf("Informe o valor para deposito: R$ ");
                scanf("%f", &deposito);
                saldo = saldo + deposito;
                printf("Deposito realizado com sucesso!\nSaldo Atualizado: R$ %2.2f\n", saldo);
	            break;
	        }
	        default: {
	            printf("Opção Inválida!");
	            break;
	        }
	    }
	    printf("\nAperte 1 para continuar a fazer operações: ");
	    scanf("%i", &opcao);
	}while(opcao==1);

    return 0;
}

