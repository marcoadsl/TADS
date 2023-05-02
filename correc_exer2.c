#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int matriz [5] [8];
	int coluna;
	int linha, valor=1;
	
	
	for(linha=0; linha<5; linha ++, valor++)

		for (coluna=0; coluna<8; coluna++)	
	matriz [linha][coluna] =valor+coluna;
	
	
	for(linha=0; linha<5; linha ++){

		for (coluna=0; coluna<8; coluna++)	
	printf("%d " , matriz [linha][coluna]);
		printf("\n");
	}
	
	

}
