#include <stdio.h>
int main() {

  int numero, par, impar;

  printf("Digite um numero para saber se ele é par ou impar\n");
  int deu_certo = scanf("%d", &numero);
  if (deu_certo){
  
    if (numero % 2 == 0) {
    printf("O numero %d é par d--(- _  -)z", numero);
  } else {

    printf("O numero %d é impar p--(- W  -)z", numero);
  } 
    
}else{ 
    printf("numero invalido.\n");
  }

 return 0;
}