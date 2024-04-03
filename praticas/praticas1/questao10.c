/*10. Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).
*/
#include <stdio.h>
int main(){  
int numero;

    printf("Digite um numero para ve-lo em unidade, dezena, centena e em milhares\n");
int deu_certo = scanf("%i", &numero);

  int milhares = numero / 1000;
  int centenas = (numero % 1000)/100;
  int dezenas = ((numero % 1000)%100)/10;
  int unidade = (((numero % 1000)%100)%10);

  printf("A quantide em milhares do numero é: %i\n", milhares);
  printf("A quantide em centenas do numero é: %i\n", centenas);
  printf("A quantide em dezenas do numero é: %i\n", dezenas);
  printf("A quantide em unidades do numero é: %i\n", unidade);
  





  
  return 0;
  }