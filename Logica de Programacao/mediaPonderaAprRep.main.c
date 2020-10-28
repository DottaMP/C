#include <stdio.h>

/*Faça um algoritmo que calcule a media ponderada das notas de 3 provas. 
A primeira e a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, 
mostrar a media do aluno e indicar se o aluno foi aprovado ou reprovado. 
A nota para aprovação deve ser igual ou superior a 60 pontos.*/

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


