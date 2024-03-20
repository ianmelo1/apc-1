/*  8. Faça um programa em C que leia as coordenadas de dois pontos (x1, y1) e (x2, y2) e calcule a distância entre eles (d = raiz_quadrada((x2-x1)² + (y2-y1)²)).
*/



#include <stdio.h>
#include <math.h>

int main(){

  float x1, y1, x2, y2, distancia;

  printf("Digite as coordenadas do primeiro ponto:\n");
  int deu_certo = scanf("%f %f", &x1, &y1);

  printf("Digite as coordenadas do segundo ponto:\n");
  deu_certo = scanf("%f %f", &x2, &y2);

  distancia = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));


  printf("A distancia entre os pontos é: %.2f\n", distancia);


  return 0;
}