/*2. Faça um programa em C que calcule o valor do desconto sobre um valor bruto
 * lido com base na escala: até de 100.00 aplica 1%; de 100.01 a 500.00 aplica
 * 5%; acima de 500.00 aplica 10%.
 */

#include <stdio.h>

int main() {
  float valor_bruto, desconto, valor_desc, valor_final;

  printf("Digite o valor da compra:\n");
  int deu_certo = scanf("%f", &valor_bruto);

  valor_desc = valor_bruto * desconto;

  if (valor_bruto <= 100.f) {
    desconto = 0.01f;
    valor_desc = valor_bruto * desconto;
    valor_final = valor_bruto - valor_desc;
    printf("\nO valor final é %.2f$", valor_desc);
  } else if (valor_bruto <= 500.0f) {
    desconto = 0.05f;
    valor_desc = valor_bruto * desconto;
    valor_final = valor_bruto - valor_desc;
    printf("\nO valor final é %.2f$", valor_desc);
  } else {
    desconto = 0.10f;
    valor_desc = valor_bruto * desconto;
    valor_final = valor_bruto - valor_desc;
  }
    printf("\nO valor descontado é %.2f$ e o final é %.2f$", valor_desc, valor_final);
  

  return 0;
}