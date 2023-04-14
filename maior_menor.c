//Fazer um programa que recebe 3 valores inteiros do usuário e
// mostra o maior deles, o menor deles e o valor intermediário.

#include <stdio.h>

int main()
{
   
    int v1, v2;
    char ope;
   
    while (1)
    {
   
    printf ("Informe dois valores: ");
    scanf ("%d %d", &v1, &v2);
   
    printf ("Informe a operacao: ");
    scanf ("%c", &ope);
    scanf ("%c", &ope);

   
    if (ope == '+')
       printf ("Soma = %d", v1+v2);
    if (ope == '-')
       printf ("Subtracao = %d", v1-v2);
    if (ope == '*')
       printf ("Multiplicacao = %d", v1*v2);
    if (ope == '/')
       printf ("Divisao = %d", v1/v2);
    }
       
}
