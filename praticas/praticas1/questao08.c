/* 8. Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).
*/


#include <stdio.h>
#include <math.h>

int main(){

int segundos;
  printf("Digite o quantidade de segundos que voce quer converter em horas e minutos: ");
int deu_certo = scanf(" %i", &segundos);

  int horas = segundos / 3600;
  int minutos = (segundos % 3600) / 60;
  int segundos_restantes = segundos % 60;

  printf("\n%i segundos equivalem a %i horas, %i minutos e %i segundos", segundos, horas, minutos, segundos_restantes);



  return 0;
}