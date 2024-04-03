/*9. Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.
*/

#include <stdio.h>

int main(){

int anos, meses, dias;

printf("Digite uma idade expressa em anos\n");
  int deu_certo = scanf("%i", &anos);

printf("Digite a quantidade de meses\n");
  deu_certo = scanf("%i", &meses);

printf("Digite a quantidade de dias:\n");
  deu_certo = scanf("%i", &dias);

  int anos_dias = anos * 365;
  int meses_dias = meses * 30;
  int dias_totais = meses_dias + dias + anos_dias;

  printf("Essa é a quantidade total de dias: %i", dias_totais);


  return 0;
}