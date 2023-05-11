/*
 * Fazer uma função que recebe um mês e um ano como parâmetros e retorna o número de dias
daquele mês/ano. Dica: um ano é bissexto quando é múltiplo de 4 e não múltiplo de 100, ou
também quando é múltiplo de 400.
 * 
 * Autor: Marco Antônio da Silva Leite
 * Disciplina: Programação Estruturada - TADS - IFSUL
 * 
 * */


#include <stdio.h>
#include <stdlib.h>

int n_dias (int, int);

int main(){
	
	int mes, ano;
	int dias;
	
printf ("Informe um mês e ano: ");

scanf ("%d %d \n", &mes, &ano);
dias = n_dias(mes, ano);

printf ("\n %d", dias);
//return 0;
}

int n_dias(int mes, int ano)
{
	int dias_mes[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		
		if (mes != 2)
		return dias_mes[mes-1];
		
		if ((ano % 400 == 0 || ano % 4 ==0) && (ano % 100  == !0))
		return 29;
			return 28;
}
