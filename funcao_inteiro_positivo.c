/*
 *  Autor: Marco Antônio da Silva Leite
 * Disciplina: Programação Estruturada - TADS - IFSUL
 * 
 */

/*
*Faça uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o número de
*divisores desse valor.
*/


#include <stdio.h>

int contar_Divisores(int valor) {
    int contador = 0;
    
    //estrutura de controle
    
    for (int i = 1; i <= valor; i++) {
        if (valor % i == 0) {
            contador++;
        }
    }
  
    //incrementa o contador
  
    return contador;
}


int main() {
    int numero;
    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &numero);
    
    //Chama a Função
    
    int qnt_Divisores = contar_Divisores(numero); //qnt_Divisores = Quantidade de divisores
    
    printf("O número de divisores de %d é %d\n", numero, qnt_Divisores);
    
    return 0;
}
