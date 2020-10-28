#include <stdio.h>
/* Faça um algoritmo que simule o funcionamento de um caixa eletrônico, onde será apresentado uma lista de operações:
1-Saldo
2-Saque
3-Deposito
Ao iniciar o programa determine um valor inicio para a variável saldo, se o cliente escolher a opção 1 mostre o valor 
do saldo, caso escolha o valor 2 leia o valor a ser sacado e verifique se existe saldo suficiente, se o saldo for 
maior ou igual , deduza da variável saldo o valor solicitado, caso não haja saldo suficiente mostre a mensagem “Saldo Insuficiente”, 
caso a opção 3 seja escolhida adicione o valor informado de deposito ao saldo.*/

int main(int argc, char *argv[]){
    
    int opcao;
    float saldo, saque, deposito;
    
    printf("Informe o valor do saldo em conta: R$ ");
    scanf("%f", &saldo);
    printf("Escolha a operação que deseja realizar: ");
	printf("\n[1] - Saldo: ");
	printf("\n[2] - Saque: ");
	printf("\n[3] - Depósito: ");
	printf("\nDigite a opção desejada: ");
	scanf("%d", &opcao);
	switch(opcao){
	    case 1:{
	        printf("O valor do seu saldo é: R$ %.2f", saldo);
	        break;
	    }
	    case 2:{
	        printf("Informe o valor para saque: R$ ");
            scanf("%f", &saque);
            if(saldo >=saque){
                saldo = saldo - saque;
                printf("Saque realizado com sucesso!\nSaldo Atualizado: R$ %.2f", saldo);
            } else{
                printf("Saldo Insuficiente!");
            }
	        break;
	    }
	    case 3:{
	        printf("Informe o valor para deposito: R$ ");
            scanf("%f", &deposito);
            saldo = saldo + deposito;
            printf("Deposito realizado com sucesso!\nSaldo Atualizado: R$ %.2f", saldo);
	        break;
	    }
	    
	    default: {
	        printf("Opção Inválida!");
	        break;
	    }
	}
    return 0;
}
