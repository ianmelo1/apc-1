#include <stdio.h>

int main(){
  long int gb;

  printf("Digite a quantidade de Gigabytes para transformar em bytes:\n");
  int deu_certo = scanf("%li", &gb);

  long int bytes = gb * 1024 * 1024 * 1024;
  printf("A quantidade de bytes é: %li\n", bytes);



  return 0;
}