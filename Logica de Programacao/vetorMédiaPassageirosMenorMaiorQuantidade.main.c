/*Faça um programa que controle e armazene em um vetor o número de passageiros 
de uma linha de ônibus hora a hora, ao final do dia exiba a média de passageiros, 
menor e maior quantidade por hora.*/
#include <stdio.h>

int main(int argc, char *argv[]){
    float media=0.0;
    int passageiros[24], i, maior, menor; 
    
    for(i=0; i<24; i++){
        printf("Informe o número de passageiros na hora %i: ", i+1);
        scanf("%i", &passageiros[i]);
        
    }
    for(i=0; i<20; i++){
        if (i==0){
	        maior = passageiros[i];
	        menor = passageiros[i];
            
        }else if(passageiros[i]>maior){
	            maior = passageiros[i];
	        
	    }else if(passageiros[i]<menor){
	            menor = passageiros[i];
	        
	    }
	    media+=(passageiros[i]);
    }
    media/=24;
    
    printf("\nMédia dos números de passageiros informados: %.2f\nMenor número de passageiros: %i\nMaior número de passageiros: %i\n", media, menor, maior);
    
    return 0;
}
