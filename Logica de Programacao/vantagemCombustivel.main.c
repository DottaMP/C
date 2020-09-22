/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

/*Crie um  algoritmo que informe dois valores reais, valor em reais do litro da gasolina 
e valor em reais do litro do álcool,  calcule para definir na tela qual combustível é o mais 
vantajoso, sabendo que o valor do álcool para ser mais vantajoso deve ser menor 
que 70% do valor da gasolina.*/

int main(int argc, char *argv[]){
    
    float gasolina, alcool, porcentagem;
    
    printf("Informe o valor do litro da gasolina: ");
    scanf("%f", &gasolina);
    
    printf("Informe o valor do litro do etanol: ");
    scanf("%f", &alcool);
    
    
    if(alcool < gasolina){
        
        porcentagem = (alcool/gasolina)*100;
        
        if(porcentagem <= 70){
            printf("Coloque etanol, sua vantagem será de %.0f%%!", porcentagem);
        }else {
        printf("Coloque gasolina, é mais vantajoso!");
        }
        
    }else {
        printf("Coloque gasolina, é mais vantajoso!");
    }
    
    return 0;
}


