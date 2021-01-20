#include <stdio.h>
/*Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço. 
O monge, necessitando de alimentos, indagou à rainha sobre o pagamento, se poderia ser 
feito com grãos de trigo dispostos em um tabuleiro de 64 casas, de tal forma que o 
primeiro quadro deveria conter apenas um grão e os quadros subsequentes, o dobro do 
quadro anterior. A rainha achou o trabalho barato e pediu que o serviço fosse executado, 
sem se dar conta de que seria impossível efetuar o pagamento. Faça um algoritmo para 
calcular o número de grãos que o monge esperava receber.
Curiosidade: 100.000 graos = 1kg*/

int main(int argc, char *argv[]){
    
    int cont;
    float totalGraos=1, somaGraos=0, somaKgGraos=0;
    
	for(cont=1; cont<=64; cont++){
	    
	    if(cont>1){
	    totalGraos*= 2; //multiplica total de grãos por 2.
	    somaGraos+=totalGraos; //soma o total de grãos e acumula com o soma grãos.
	    somaKgGraos=somaGraos/100000;
	    }
	    printf("Quadro do xadrez %i tem %f grão(s)\n", cont, totalGraos); //mostra a quantidade de grãos por casa.
	}
	printf("O Monge deverá receber como pagamento: %f grãos, %f Kg", somaGraos, somaKgGraos);
	

    /*int main(int argc, char *argv[]) {
    float graos=1, ultimaCasa=1 ,kg;
    int x;
    
    for(x=1;x<=64;x++){
	printf("%i Casa = %f \n", x, ultimaCasa);
	graos = graos + (ultimaCasa);
	ultimaCasa = ultimaCasa * 2;
    }
    kg = graos / 100000;
    printf("total de kg: %f", kg);*/

    return 0;
}

