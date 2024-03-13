/*  7. Faça um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário líquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%.
*/
#include <stdio.h>
int main(){
  float valor_hora_trabalho = 150.0f;
  float horas_trabalhadas_mes = 100.0f;

  const float IR = 0.25;
  const float INSS = 0.11;

  float salario_bruto = valor_hora_trabalho * horas_trabalhadas_mes;
  float imposto_renda = salario_bruto * IR;
  float imposto_previdencia = salario_bruto * INSS;
  float salario_liquido = salario_bruto - imposto_renda - imposto_previdencia;

    printf("\x1b[40m\x1b[37m---------------------------------\n");
    printf("    C O N T R A C H E Q U E     \n");
    printf("---------------------------------\n");
    printf("Salario Bruto...: %15.2f\n", salario_bruto);
    printf("Imposto Renda...: %14.2f\n", imposto_renda);
    printf("Imposto Previ...: %14.2f\n", imposto_previdencia);
    printf("Salario Liquido.: %14.2f\n", salario_liquido);
    printf("---------------------------------\n");
  
    return 0;
  }
