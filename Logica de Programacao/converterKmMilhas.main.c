#include <stdio.h>

/*Faça um programa em C que dada uma distância em km converta e exiba em milhas, onde 1Milha = 1,60934km*/

int main()
{
        float km, milha; //Declarando as variáveis que serão utilizadas
        
        printf("Informe o KM: "); //Pedindo para o usuário entrar com o dado
        scanf("%f",&km); 
        
        milha = km / 1.6093;
        printf("A distancia em milhas é %f\n",milha); //Realizando a saída de dados
        printf("%f km = %f milhas \n", km, milha); //Outra maneira de realizar a saída de dados
        
	return 0;
}
