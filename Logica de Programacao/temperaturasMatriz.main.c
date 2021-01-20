#include <stdio.h>
/*Construa um programa em C que utiliza uma matriz 10×3 que armazene as 
temperaturas máxima e mínima do dia, assim como a média de temperatura na 
última coluna.  Crie um menu de escolha que ofereça as seguintes informações:
1.	temperatura mínima de todos os dias.
2.	temperatura máxima de todos os dias.
3.	maior variação de temperatura de todos os dias.
4.	Sair do programa.*/

int main(int argc, char *argv[]){
    float temperatura[10][3], variacao=0.0, maiorVariacao=0.0;
    int i, j, opcao;
    
    for (i=0; i<10; i++ ){
        printf ("Informe a temperatura mínima do %iº dia: ", i+1);
        scanf ("%f", &temperatura[i][0]);
        printf ("Informe a temperatura máxima do %iº dia: ", i+1);
        scanf ("%f", &temperatura[i][1]);
    }
    
    for (i=0; i<10; i++ ){
        temperatura[i][2] = (temperatura[i][0]+temperatura[i][1])/2; //média do dia
        variacao=temperatura[i][1]-temperatura[i][0]; 
        if(variacao>maiorVariacao){ //verificador na maior variação de temperatpura no dia
            maiorVariacao=variacao; 
        }
    }
	
	do{
	    printf("\nEscolha a operação que deseja realizar:");
	    printf("\n[1] - Temperatura mínima de todos os dias;");
	    printf("\n[2] - Temperatura máxima de todos os dias;");
	    printf("\n[3] - Maior variação de temperatura de todos os dias;");
	    printf("\n[4] - Sair do programa.");
	    printf("\nDigite a opção desejada: ");
	    scanf("%d", &opcao);
	    
    	switch(opcao){
    	    case 1:{
    	        printf("\nTemperaturas mínimas de todos os dias:\n");
    	            for (i=0; i<10; i++ ){
                        printf("%.0f°C\n", temperatura[i][0]);
    	            }
                break;
    	    }
    	    case 2:{
    	        printf("\nTemperaturas máximas de todos os dias:\n");
    	            for (i=0; i<10; i++ ){
                        printf("%.0f°C\n", temperatura[i][1]);
    	            }
                break;
    	    }
    	    case 3:{
    	        printf("\nMaior variação de temperatura de todos os dias foi de: %.0f°C\n", maiorVariacao);
                break;
    	    }
    	    case 4:{
    	        printf("\nPrograma Finalizado!\n");
                break;
    	    }
    	    
    	    default: {
    	        printf("\nOpção Inválida! Digite uma opção válida!!!\n");
    	        break;
    	    }
    	}
	}while(opcao!=4);

    return 0;
}
