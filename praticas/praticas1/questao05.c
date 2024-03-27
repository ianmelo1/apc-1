#include <stdio.h>
#include <math.h>

int main(){
  long int gb;

  printf("Digite a quantidade de Gigabytes para transformar em bytes:\n");
  int deu_certo = scanf("%li", &gb);

  double bytes = gb * pow(1024, 3);
  printf("A quantidade de bytes é: %f\n", bytes);



  return 0;
}