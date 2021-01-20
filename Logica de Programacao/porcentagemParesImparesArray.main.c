#include <stdio.h>
/*Faça um algoritmo que armazene um vetor de inteiros de 20 posições, 
identifique o percentual de números ímpares e de números pares informados.*/
int main(int argc, char *argv[])
{
    int array[20], i;
    float porcImpar=0, porcPar=0, impar=0, par=0;
    
    for(i=0; i<20; i++){
        printf("Informe o %iº número: ", i+1);
        scanf("%i", &array[i]);
        
        if(array[i]%2==0){
            par++;
        }else{
            impar++;
        }
    }

    porcPar = (par/20)*100;
    porcImpar = (impar/20)*100;
    
    printf("\nPorcentagem de pares: %.0f%%", porcPar);
    printf("\nPorcentagem de ímpares: %.0f%%", porcImpar);
   

    /*int main(int argc, char** argv) {
    int numeros[20]; // 0..19
    int resto2, x;
    float percImpar=0, percPar=0;
    // x a Y 0...19
    for(x=0; x<=19; x++){
	printf("Informe um valor:");
	scanf("%i", &numeros[x]);
	resto2 = numeros[x]%2; //resto da divisao inteiro por 2
	if(resto2==0){
		percPar++; //percPar = percPar + 1
	} else {
		percImpar++; 	
	}
    }
    percPar=(percPar/20)*100;
    percImpar=(percImpar/20)*100;
    printf("Perc. Pares = %.2f Perc. Impares = %.2f", percPar, percImpar);*/

    return 0;
}
