/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[]){
    float p1, p2, media;
    int falta;
    
    printf("Informe um valor para p1:");
    scanf("%f", &p1);
    
    printf("Informe um valor para p2:");
    scanf("%f", &p2);
    
    printf("Informe as faltas:");
    scanf("%i", &falta);
    
    media = (p1+p2)/2;
    
    //seleção simples usa-se o if, seleção composta usa-se o else. O if existe sem o else, porém o else não existe sem o if.
    if(media>=6 && falta <=20){ //expressão lógica no if, não existe expressão lógica no else
        printf("Aluno Aprovado!");
    }else {
        printf("Aluno Reprovado!");
    }
    
    return 0;
}

