/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
        float distancia, velocidade, tempo, consumo, consumoNecessario; 
        
        printf("Informe a distância da sua viagem: "); 
        scanf("%f",&distancia); 
        
        printf("Informe a velocidade média: "); 
        scanf("%f",&velocidade);
        
        printf("Informe o consumo de combustivel do seu carro em km/l: "); 
        scanf("%f",&consumo); 
        
        tempo = distancia / velocidade;
        consumoNecessario = distancia / consumo;
		
		printf("Tempo de Viagem: %.2lf\n", tempo);
        printf("Será necessário %.0f litros", consumoNecessario);

	return 0;
}

