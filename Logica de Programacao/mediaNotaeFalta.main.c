#include <stdio.h>

/*Informe as duas notas de um aluno (P1 e P2) e a quantidade de faltas no semestre, 
calcule a media das notas e o percentual de faltas sobre 20 aulas.  Caso o percentual 
de faltas for maior que 30% o aluno esta automaticamente reprovado, caso ao contrario 
verifique se a media e maior igual a 6,  se afirmativo o aluno esta aprovado, senão 
informe uma nota P3 para recalcular a media, se a nova media for maior igual a 6, escreva 
aprovado no exame, caso negativo exiba reprovado por nota.*/

int main(int argc, char *argv[]){

    float nota1, nota2, nota3, media, novaMedia, faltas;

        printf("Digite a 1ª nota: "); 
        scanf("%f",&nota1); 

        printf("Digite a 2ª nota: "); 
        scanf("%f",&nota2); 

        printf("Digite a quantidade de faltas desse aluno(a): "); 
        scanf("%f",&faltas); 
        
        media = (nota1 + nota2)/2;
        faltas = (faltas/20) * 100;
        
        if (media >= 6 && faltas < 31){
            printf("Aluno Aprovado!"); 
            
        }if (media < 6 && faltas < 31){
            printf("Digite a 3ª nota: "); 
            scanf("%f",&nota3); 
            novaMedia = (nota1 + nota2 + nota3) / 3;
            if(novaMedia >= 6){
                printf("Aluno Aprovado!"); 
            }else {
                printf("Aluno Está reprovado!");
            }
    
        }if(faltas > 31){
            printf("Aluno reprovado! Faltas superior a %.0f%%!", faltas);
            
        }

    return 0;
}


