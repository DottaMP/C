/*Nome: Mayara Pereira Dotta
Matrícula (RA): 2040482023049
Curso: ADS 204-20202 (Noite)*/
/*Faça um programa que colete a nota de 20 alunos e armazene 
em um vetor, calcule a média da sala depois da coleta do vetor, 
em um novo laço mostre se o aluno está aprovado ou reprovado 
"média acima de 6" e se a média dele é maior que a média da sala*/
#include <stdio.h>

int main(int argc, char *argv[]){
    float media=0.0;
    int nota[20], i; 
    for(i=0; i<20; i++){
        printf("Informe a nota final %iº aluno(a): ", i+1);
        scanf("%i", &nota[i]);
        media+=(nota[i]);
    }
    //printf("\n%.0f soma notas", media);
    media/=20;
    //printf("\n%.2f media", media);
    
    for(i=0; i<20; i++){
        if(nota[i]>6){
            if(nota[i]>media){
                printf("\nO %iº aluno(a) está APROVADO com média MAIOR que a média da sala!", i+1);
            }else{
                printf("\nO %iº aluno(a) está APROVADO com média MENOR que a média da sala!", i+1);
            }
        }else{
            printf("\nO %iº aluno(a) está REPROVADO!", i+1);
        }
    }
    return 0;
}

