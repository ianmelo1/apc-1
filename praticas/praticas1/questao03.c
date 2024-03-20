#include <stdio.h>

int main(){
  int r;
  
  printf("Digite o raio da pizza:\n");
  int deu_certo = scanf("%d", &r);
  const float pi = 3.1416;
  const float perimetro = 2 * pi  * r;






  const float area = pi * r * r;

  printf("A area da pizza é: %.2f\n", perimetro);

   



  return 0;
}