/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[]){
    
    float nota1, nota2, nota3, media, ponderada1, ponderada2, ponderada3; //Declarando as variáveis que serão utilizadas
        
        printf("Digite a 1ª nota: "); //Pedindo para o usuário entrar com o dado
        scanf("%f",&nota1); //Lendo o dados de entrada da nota1
        
        printf("Digite a 2ª nota: "); //Pedindo para o usuário entrar com o dado
        scanf("%f",&nota2); //Lendo o dados de entrada da nota2
        
        printf("Digite a 3ª nota: "); //Pedindo para o usuário entrar com o dado
        scanf("%f",&nota3); //Lendo o dados de entrada da nota3
        
        ponderada1 = nota1*1; //Ponderando a nota1 * 1 
		ponderada2 = nota2*1; //Ponderando a nota2 * 1 
		ponderada3 = nota3*2; //Ponderando a nota3 * 2 
		
		media=((ponderada1 + ponderada2 + ponderada3) / 4); //Calculando a média das notas ponderadas
		
		if(media>=6){
        printf("Aluno Aprovado com média de %.2f!", media);
        }else {
        printf("Aluno Reprovado!");
        }
    return 0;
}


