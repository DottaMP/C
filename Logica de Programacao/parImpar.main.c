/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

/*Faça um algoritmo que receba um número inteiro, identifique se este e par ou impar.*/

int main(int argc, char *argv[]){
    
    int num;
    
    printf("Informe um número inteiro: ");
    scanf("%i", &num);
    
    if(num%2==0){
        printf("Seu número é par!");
    }else {
        printf("Seu número é ímpar!");
    }
    
    return 0;
}


