/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

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
