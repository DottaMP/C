#include <stdio.h>
/*Faça um algoritmo que implemente um vetor de 20 posições, 
leia as 20 posições e identifique em um novo laço, qual o maior e 
menor número informado e qual a média dos números informados.*/
int main(int argc, char *argv[]){
    int array[20], i, maior, menor, acumulador=0;
    float media=0;
    
    for(i=0; i<20; i++){
        printf("Informe o %iº número: ", i+1);
        scanf("%i", &array[i]);
    }
        
    for(i=0; i<20; i++){
        if (i==0){
	        maior = array[i];
	        menor = array[i];
	        
	    }else if(array[i]>maior){
	            maior = array[i];
	        
	    }else if(array[i]<menor){
	            menor = array[i];
	        
	    }
	    
	    media+=(array[i]);
    }
    media/=20;
    printf("\nMaior número: %i\nMenor Número: %i\nMédia dos números informados: %.2f", maior, menor, media);
    
    /*int main(int argc, char *argv[]) {
    float dados[20]; //0..19
    int x;
    float menor, maior, media=0;
	
    for(x=0; x<20; x++){
	printf("Informe um valor:");
	scanf("%f", &dados[x]);
    }
    for(x=0; x<20; x++){
	media = media + dados[x];
	if(x==0){
		menor = dados[0];
		maior = dados[0];	
	} else {
		if(dados[x] < menor){
			menor = dados[x];
		}	
		if(dados[x]>maior){
			maior = dados[x];
		}
	}
    }
    media = media / 20;
    printf("Menor=%f, Maior=%f, media=%f", menor, maior, media);*/


    return 0;
}

