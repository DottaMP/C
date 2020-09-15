/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
        float nota1, nota2, nota3, media, ponderada1, ponderada2, ponderada3; //Declarando as variáveis que serão utilizadas
        
        printf("Digite a 1ª nota: "); //Pedindo para o usuário entrar com o dado
        scanf("%f",&nota1); //Lendo o dados de entrada da nota1
        
        printf("Digite a 2ª nota: "); //Pedindo para o usuário entrar com o dado
        scanf("%f",&nota2); //Lendo o dados de entrada da nota2
        
        printf("Digite a 3ª nota: "); //Pedindo para o usuário entrar com o dado
        scanf("%f",&nota3); //Lendo o dados de entrada da nota3
        
        ponderada1 = nota1*2; //Ponderando a nota1 * 2 (Ou seja, a nota máxima para essa é 2)
		ponderada2 = nota2*3; //Ponderando a nota2 * 3 (Ou seja, a nota máxima para essa é 3)
		ponderada3 = nota3*5; //Ponderando a nota3 * 5 (Ou seja, a nota máxima para essa é 5)
		
		media=((ponderada1 + ponderada2 + ponderada3) / 10); //Calculando a média das notas ponderadas
		
		printf("A média é %.2f\n",media); //Imprimindo a média, o 2lf (o 2 limita a qtd de casas decimais após a vírgula)
        
		return 0;
}
