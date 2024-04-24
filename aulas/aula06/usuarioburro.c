#include <stdio.h>
int main(){
    float nota1, nota2;
 





  
  printf("Entre com a primeira nota:\n");
  int deu_certo = scanf("%f", &nota1);
  
  if (nota1 >= 0.0f && nota1 <= 10.0f){
    printf("Entre com a segunda nota:\n");
    deu_certo = scanf("%f", &nota2);

    if (nota2 >= 0.0f && nota2 <= 10.0f){

      float media = 0.4 * nota1 + 0.6 *nota2;
      printf("A media é: %.1f", media);
      
    }else {
      printf("Nota inválida! Digite um valor entre 0 e 10\n");
    }
  } else {
    printf("Nota inválida! Digite um valor entre 0 e 10\n");
  

    
  
  return 0;
}