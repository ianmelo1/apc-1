#include <stdio.h>


int main(){

  int numero;

  printf("Digite um número para saber sua tabuada.\n");
  int deu_certo = scanf("%i", &numero);

  if (deu_certo && numero > 0 && numero <11){
    printf("A tabuada de %i\n", numero);
    for (int i=1; i<=10; i++){
      printf("%i X %i = %i\n", i, numero, i * numero);
    }
    printf("\nA tabuada invertida é:\n");
    for (int i=10; i>0; i--){
      printf("%i X %i = %i\n", i, numero, i * numero);
    }
  } else {
    printf("Número inválido.");
  }




  return 0;
}