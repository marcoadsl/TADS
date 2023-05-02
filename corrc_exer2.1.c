#include <stdio.h>

int main()
{
	int matriz[5][8];
	int col, lin;
	
    for (lin=0;lin<5;lin++)	
	   for (col=0;col<8;col++)
	       matriz[lin][col] = lin+col+1;
	

    for (lin=0;lin<5;lin++)	
    {
	   for (col=0;col<8;col++)
	       printf ("%d ", matriz[lin][col]);
	   printf ("\n");
	}
}
