#include <stdio.h>

/* Faça um programa em C que verifique se o ano é bissexto ou não. Se ele não for 
bissexto, indique quanto tempo falta para o próximo bissexto.
Para ser bissexto, o ano deve ser: Divisível por 4. Sendo assim, 
a divisão é exata com o resto igual a zero; Não pode ser divisível por 100. 
Com isso, a divisão não é exata, ou seja, deixa resto diferente de zero; 
Pode ser que seja divisível por 400. */

int main(int argc, char *argv[]){
    
    int ano, proxAno, sobra;
  
    printf("Informe um ano: ");
    scanf("%i", &ano);
    
    if (ano % 4 == 0){
        printf("O ano é bissexto!");
        
    } else if((ano % 4 == 0) && (ano % 100 != 0)){
        printf("O ano é bissexto!");
        
    } else if(ano % 4 != 0){
        
        sobra = ano % 4;
            
            if (sobra == 3){
                proxAno = ano + 1;
                printf("Falta 1 ano para o próximo ano bissexto, será em %i.", proxAno);
                
            } else if (sobra == 2){
                proxAno = ano + 2;
                printf("Faltam 2 anos para o próximo ano bissexto, será em %i.", proxAno);
                
            } else if (sobra == 1){
                proxAno = ano + 3;
                printf("Faltam 3 anos para o próximo ano bissexto, será em %i.", proxAno);
            }
    }
    
    return 0;
}
