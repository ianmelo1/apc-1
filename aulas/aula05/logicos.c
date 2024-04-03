#include <stdio.h>

int main(){

  int numero1;

  printf("Entre com o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  // 0 < x E x < 10
  int numero_de_0_a_10 = numero1>0 && numero1<10;
  printf("O numero eh maior q 0 e menor que 10? %i\n", numero_de_0_a_10);

  //x < 0 OU x > 10
  int menor_que_0_ou_maior_que_10 = numero1 < 0 || numero1 > 10;
  printf("O numero é menor que 0 ou maior que 10? %i\n", menor_que_0_ou_maior_que_10);

  // x NAO > 0
  int nao_maior_que_0 = !(numero1 > 0);
  printf("O numero nao eh maior que 0? %i\n", nao_maior_que_0);
  
  return 0;
}