/*
4. Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
*/

#include <stdio.h>
int main (){

  const float ICMS = 0.17;
  const float COFINS = 0.076;
  const float PIS_PASEP = 0.0165;
  float preco_inicial = 100.0f;
  
  float valor_icms = preco_inicial * ICMS;
  float valor_cofins = preco_inicial * COFINS;
  float valor_pis_pasep = preco_inicial * PIS_PASEP;


  
  float preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_inicial;
  
  printf("preço inicial = %f\n", preco_inicial);
  printf("valor ICMS = %f\n", valor_icms);
  printf("valor COFINS = %f\n", valor_cofins);
  printf("valor PIS_PASEP = %f\n", valor_pis_pasep);
  printf("preço final é = %f\n", preco_final);


  return 0;
}