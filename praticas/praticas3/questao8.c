// 8. Faça um programa em C que calcule o fatorial de um número inteiro

#include <stdio.h>

int main(){
  int numero;

  printf("Digite um numero para descobrir seu fatorial. ");
  int leu_certo = scanf("%i", &numero);

  
  if(leu_certo){
    int fatorial = 1;
  for(int i=1; i <= numero; i++){
  fatorial = fatorial * i;

   
  }
     printf("O fatoria do numero %i é: %i", numero, fatorial);
    
  


    }

  return 0;
}