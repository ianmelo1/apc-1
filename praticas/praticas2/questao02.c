/*  2. Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.
*/

#include <stdio.h>
int main(){

  int n1, n2;
  printf("Digite dois numeros inteiros para descobrir o quociente e o resto da divisão entre eles:\n");
  int deu_certo = scanf("%d %d", &n1, &n2);

  int quociente = n1 / n2;
  int resto = n1 % n2;

  printf("O quociente é: %d\nE o resto é: %d", quociente, resto);



  return 0;
}