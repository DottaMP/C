#include <stdio.h>

/* Informe três números inteiros, utilizando comandos de seleção encadeados, defina 
qual o menor, do meio e o maior número. Caso os números forem iguais, mostre a 
mensagem: “Números Iguais, verifique”.*/

#include <stdio.h> 

int main(int argc, char *argv[]){

    int num1, num2, num3, maior, menor, meio;
    
    printf("Informe 3 números inteiros diferentes: \n");
    scanf("%i", &num1);
    scanf("\n%i", &num2);
    scanf("\n%i", &num3);
    
    if(num1 == num2 || num1 == num3 || num2 == num3){
    printf("Valores duplicados, verifique");
    
    }else{
        if(num1 > num2 && num1 > num3){
           maior = num1;
           if(num2 > num3){
               meio = num2;
               menor = num3;
            }else{
                meio = num3;
                menor = num2;
            }
            
        }else{
            if(num2 > num1 && num2 > num3){
                maior = num2;
                if(num1 > num3){
                    meio = num1;
                    menor = num3;
                }else{
                    meio = num3;
                    menor = num1;
                }
            }else{
                maior = num3;
                if(num2 > num1){
                    meio = num2; 
                    menor = num1;
                }else{
                    meio = num1;
                    menor = num2;
                }
            }
        }
    printf ("Maior número é: %i\nNúmero do meio: %i\nMenor Número: %i", maior, meio, menor);
    }
    return 0;
}
