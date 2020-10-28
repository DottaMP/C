#include <stdio.h>

/* A empresa XPTO concedeu um bônus de 20% do valor do salário a todos os funcionários 
com tempo de trabalho na empresa igual ou superior a 5 anos e de 10% aos demais.
Faça um programa em C que receba o salário e o tempo de serviço de um
funcionário, calcule e mostre o valor do bônus recebido por ele.*/

int main(int argc, char *argv[]){
    
    float salario;
    int anos;
    
    printf("Informe o seu salário: R$ ");
    scanf("%f", &salario);
    
    printf("Informe quantos anos de empresa você possuí: ");
    scanf("%i", &anos);
    
    if (anos >= 5){
        salario = salario + ((20 * salario)/100);
        printf("O salário ajustado com bônus de 20%% será de: R$ %2.f", salario);
        
    } else {
        salario = salario + ((10 * salario)/100);
        printf("O salário ajustado com bônus de 10%% será de: R$ %2.f", salario);
    }
    
    return 0;
}
