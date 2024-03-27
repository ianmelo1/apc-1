/* 7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.
*/

#include <stdio.h>
#include <math.h>

int main(){

    float distancia;
    float angulo;
    const float PI = 3.1416;
    
    printf("Digite a distância percorrida pelo avião em metros: ");
    int deu_certo = scanf("%f", &distancia);
do{
    printf("Digite o ângulo de inclinação do avião: ");
    deu_certo = scanf("%f", &angulo);
  
  if (angulo >45)
  printf("Angulo invalido!!\n");
} while (angulo > 45);
  
   double altura = sin(angulo * PI / 180) * distancia;
  
    printf("A altura alcançada pelo avião é: %.2f metros\n", 
    altura);
  
  
    return 0;
  }