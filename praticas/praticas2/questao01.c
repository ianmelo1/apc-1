/*   1. Faça um programa em C que leia três números reais e imprima a média aritmética destes números.
*/


#include <stdio.h>

int main(){
  float n1, n2, n3;

  printf("Digite tres numeros reais para descobrir a media aritmetica:\n");
  int deu_certo = scanf("%f %f %f", &n1, &n2, &n3);

  float media = (n1 + n2 + n3) / 3;
  printf("A media aritmetica é: %.1f\n", media);




  return 0;
}