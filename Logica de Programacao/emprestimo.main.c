/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

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
