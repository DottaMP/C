/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

/* Leia a velocidade máxima permitida em uma avenida e a velocidade com que o motorista estava 
dirigindo nela. Calcule e mostre a multa que uma pessoa vai receber, sabendo que são pagos: R$ 50 reais 
se o motorista ultrapassar em até 10km/h a velocidade permitida; R$ 100 reais, se o motorista ultrapassar 
de 11 a 30 km/h a velocidade permitida; e R$ 200 reais, se estiver acima de 31km/h da velocidade permitida. */

int main(int argc, char *argv[]){
    
    int velMaxima, velVeiculo, acimaVel;
  
    printf("Informe a velocidade máxima da Av/Rua: ");
    scanf("%i", &velMaxima);
    
    printf("Informe a velocidade do veículo: ");
    scanf("%i", &velVeiculo);
    
    if (velVeiculo > velMaxima){
        
        acimaVel = velVeiculo - velMaxima;
        
        if (acimaVel <= 10){
            printf("Multa de R$ 50,00, por ultrapassar %ikm/h a velocidade permitida.", acimaVel);
            
        }else if (acimaVel > 10 && acimaVel <=30){
            printf("Multa de R$ 100,00, por ultrapassar %ikm/h a velocidade permitida.", acimaVel);
            
        }else if (acimaVel > 30){
            printf("Multa de R$ 200,00, por ultrapassar %ikm/h a velocidade permitida.", acimaVel);
        }
        
    }else {
        printf("Dentro da velocidade permitida!");
    }
    
    return 0;
}
