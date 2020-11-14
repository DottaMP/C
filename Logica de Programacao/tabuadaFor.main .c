//#include <stdio.h>
/*Faça um algoritmo que dado valor inteiro informado, calcule e exiba a tabuada do número de 1 a 10.*/

int main(int argc, char *argv[]){
    
    int i, tabuada=0;
    
    printf("Informe qual tabuada você deseja calcular: ");
    scanf("%i", &tabuada);
	for(i=1; i<=10; i++){    
	    printf("%ix%i = %i\n", i, tabuada, i * tabuada);
	}
	
    return 0;
}

