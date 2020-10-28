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

