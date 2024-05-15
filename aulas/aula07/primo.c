#include <stdio.h>

int main() {

  int numero;

  printf("Entre com um numero: ");
  int leu_certo = scanf("%i", &numero);

  if (leu_certo) {
    int qtde_divisores = 0;
    for (int i = 1; i <= numero; i++) {
      if (numero % i == 0) {
        qtde_divisores++;
      }
    }
    if (qtde_divisores == 2) {
      printf("O numero é primo");
    } else {
      printf("O numero não é primo.\nA quantidade de divisores desse numero é: %i", qtde_divisores);
    }
  } else {
    printf("Numero invalido!\n");
  }

  return 0;
}