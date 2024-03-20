/*  5. Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²).
*/





#include <stdio.h>

int main(){
  float peso, altura, imc;

  printf("Digite o seu peso:\n");
  int deu_certo = scanf("%f", &peso);

  printf("Digite a sua altura:\n");
  deu_certo = scanf("%f", &altura);

  imc = peso / (altura * altura);


  printf("O seu indice de massa corporal é: %.2f", imc);


  return 0;
}