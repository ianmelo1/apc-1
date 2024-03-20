/*  4. Faça um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²).
*/



#include <stdio.h>
int main(){
  float largura, comprimento, area, area_hectares;
  
  printf("Digite a largura do terreno em metros: ");
  int deu_certo = scanf("%f", &largura);

  printf("Digite o comprimento do terreno em metros: ");
  deu_certo = scanf("%f", &comprimento);

  area = (largura * comprimento);

  area_hectares = (area / 10000);

  printf("A area em hectares é: %.4f\n", area_hectares);




  return 0;
}