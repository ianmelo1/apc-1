/*   6. Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra).
*/







#include <stdio.h>

int main(){
  int ano_fabricacao, ano_depreciacao;
  float valor_compra;

  printf("Digite o valor de compra:\n");
  int deu_certo = scanf("%f", &valor_compra);

  printf("Digite o ano de fabricação:\n");
  deu_certo = scanf("%d", &ano_fabricacao);

  printf("Digite o ano de depreciação:\n");
  deu_certo = scanf("%d", &ano_depreciacao);


  float depreciacao = (ano_depreciacao - ano_fabricacao) * 0.01 * valor_compra;

  printf("O valor depreciado do veículo é: %.2f", depreciacao);





  return 0;
}