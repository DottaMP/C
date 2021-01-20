#include <stdio.h>
/*Crie um laço e verifique qual a maior sequência de 
números pares informados, o laço fará 10 iterações.
Ex: 1,2,3,4,6,8,5,3,2,5   Sequência: 4,6,8   
O programa vai retornar: 3*/

int main(int argc, char *argv[]){
    
    int num, numAnterior=0, maiorSequencia=1;
    
    for (int i = 0; i < 10; i++) { 
        printf("Informe um numero:"); 
        scanf("%i", &num); 
        
        if (num%2==0) { 
            if(i==0){
                maiorSequencia-=1;
            }
            if (num==numAnterior+2) { 
                maiorSequencia+=1; 
            } 
        } 
        numAnterior=num;
    }   
    printf("Maior sequencia de pares informado: %i", maiorSequencia);


    /*int x, numero, resto2, seq=0, maiorSeq=0;
	// 2,4 ,3, 4,6,8, 1, 2, 4
	//  2        3        2
    for(x=0; x<10; x++){
	printf("Informe um numero:");
	scanf("%i", &numero);
	resto2	= numero % 2; //resto da divisao inteira
	if(resto2==0) { //PAR
		seq++; //seq=seq+1
		if(seq > maiorSeq){
			maiorSeq = seq;	
			printf("\n maior sequencia atualizada:%i \n", maiorSeq);
		}	
	} else {  //IMPAR
		seq = 0;
	  }
	}
	printf("A maior sequencia=%i:", maiorSeq);*/    

    return 0;
}

