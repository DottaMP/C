#include <stdio.h>
/*Crie um programa que armazene em uma matriz 10×3 em cada uma das colunas 
armazene o tamanho de uma aresta de um triangulo, ao final exiba o percentual 
de triângulos isósceles, equiláteros e escalenos.*/
int main(int argc, char *argv[]){
    int tamanho[10][3], i, j, isosceles=0, equilatero=0, escaleno=0;
    float percIsosceles=0.0, percEquilatero=0.0, percEscaleno=0.0;
    
    for (i=0; i<10; i++ ){
        printf ("Informe os dados do %iº triangulo:\n", i+1);
        for (j=0; j<3; j++ ){
            printf ("Informe o tamanho da aresta do triangulo: ");
            scanf ("%i", &tamanho[i][j]);
        }
    }
    for(i=0; i<10; i++){
        if(tamanho[i][0] == tamanho [i][1] && tamanho[i][0] == tamanho[i][2]){
            equilatero++;
            
        } else if (tamanho[i][0] == tamanho [i][1] || tamanho[i][0] == tamanho[i][2] || tamanho[i][1] == tamanho[i][2]){
            isosceles++;
            
        } else{
            escaleno++;
            
        }
    }
    percEquilatero = (equilatero/10.0)*100;
    percIsosceles = (isosceles/10.0)*100;
    percEscaleno = (escaleno/10.0)*100;
    
    printf("Percentual de isosceles: %.2f%%\n", percIsosceles);
    printf("Percentual de equilateros: %.2f%%\n", percEquilatero);
    printf("Percentual de escalenos: %.2f%%\n", percEscaleno);

    return 0;
}
