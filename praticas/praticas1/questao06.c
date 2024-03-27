/*  6. Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).
*/



#include <stdio.h>
#include <math.h>

  int main(){
    float a, b, c, delta, x1, x2;
do{
    printf("Digite o valor de a: ");
    int deu_certo = scanf("%f", &a);
  
    printf("Digite o valor de b: ");
    deu_certo = scanf("%f", &b);
  
    printf("Digite o valor de c: ");
    deu_certo = scanf(" %f", &c);
  
    delta = pow(b, 2) - 4 * a * c;
  
   if (delta < 0)
    printf("O valor de delta é negativo! operação invalida\n");
  }while (delta <0);
  
    x1 = (-b + sqrt(delta))/ (2 * a);
  
    x2 = (-b - sqrt(delta))/ (2 * a);
  
 
    
    printf("O valor de x1 é: %.2f\n", x1);
    printf("O valor de x2 é: %.2f\n", x2);
    
  
  
  
  
    return 0;
  }