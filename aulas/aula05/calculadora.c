#include <stdio.h>
#include <math.h>

int main(){
  int numero1;
  int numero2;

  printf("Entre com o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o segundo numero: ");
  deu_certo = scanf("%i", &numero2);


  int soma = numero1 + numero2;
  printf("A soma dos numeros é: %i\n", soma);

  int subtracao = numero1 - numero2;
  printf("A subtração dos numeros é: %i\n", subtracao);

  int multiplicacao = numero1 * numero2;
  printf("A multiplicação dos numeros é: %i\n", multiplicacao);

  float divisao = 1.0f * numero1 / numero2;  //conversao implicita
  printf("A divisão dos numeros é: %.2f\n", divisao);

  int resto = numero1 % numero2;
  printf("O resto da divisão dos numeros é: %i\n", resto);

  // numero1 = numero1 + 1;
  // incremento
  printf("\nO incremento do primeiro numero é: %i\n", numero1++);
  printf("O incremento do primeiro numero é: %i\n", ++numero1);

  // numero1 = numero1 - 1;
  // decremento
  printf("O decremento do primeiro numero é: %i\n", numero1--);
  printf("O decremento do primeiro numero é %i\n", --numero1);

  double raiz = sqrt(numero1);
  printf("\nA raiz quadrada do primeiro numero é: %.4f\n", raiz);

  double potencia = pow(numero1, 4); //numero1^4
  printf("O numero elevado a 4 é: %.4f\n", potencia);

  double logaritmo2 = log2(numero1);
  printf("O logaritmo na base 2 do numero é: %.2f\n", logaritmo2);

  const double PI = 3.1416;
  double seno = sin(numero1 * (PI / 180));
  printf("O seno do numero é: %f\n", seno);

  double cosseno = cos(numero1 * (PI / 180));
  printf("O cosseno do numero é: %f\n", cosseno);

  
  return 0;
}