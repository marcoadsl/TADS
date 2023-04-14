#include <stdio.h>

int main()
{
  /* ESTRUTURAS DE REPETIÇÃO
   * São utilizadas para substituir tarefas repetitivas.
   * Exemplo: imprimir números de 1 até 10
	*/

    int num1, num2;
	printf ("Informe dois valores: ");
    scanf ("%d %d", &num1, &num2);
    
    
  //COM estrutura de repetição
  int contador; //Variável de controle/contador

  //Estrutura de repetição WHILE
  printf("Números de 12 a 20 usando WHILE:\n");
  contador = 12;
  while (contador <= 20) {
    printf("%d.. ", contador);
    contador++;
  }

  printf("\n\n"); //Imprime duas linhas em branco
   
}
