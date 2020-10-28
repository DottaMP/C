#include <stdio.h>

/*Leia o salario de um trabalhador e o valor da prestação de 
um empréstimo. Se a prestação for maior que 20% do salario imprima:  
Empréstimo não concedido, caso contrario imprima:  Empréstimo concedido.*/

int
main (int argc, char *argv[])
{

  float salario, emprestimo, porcentagem;

  printf ("Informe seu salário: ");
  scanf ("%f", &salario);

  printf ("Informe o valor da prestação do empréstimo: ");
  scanf ("%f", &emprestimo);


  if (emprestimo < salario)
    {

      porcentagem = (emprestimo / salario) * 100;

      if (porcentagem > 20)
	{
	  printf ("Empréstimo não concedido!!!");
	}
      else
	{
	  printf ("Empréstimo concedido!!!");
	}
    }
  else
    {
      printf ("Empréstimo não concedido!!!");
    }
  return 0;
}
