#include <stdio.h>

int main(){
  char nome[31];
  int qnt;
  float preco;

  printf("Digite o nome do produto: ");
  int deu_certo = scanf("%[^\n]s", nome);
  
  printf("Digite a quantidade: ");
  deu_certo = scanf("%d", &qnt);
  
  printf("Digite o preço: ");
  deu_certo = scanf("%f", &preco);

  printf("---------------------------------------\n");
  printf("          N O T A   L E G A L          \n");
  printf("---------------------------------------\n");
  printf("Item             Qtd              Valor\n");
  printf("%-17s%03d%20.2f\n", nome, qnt, preco );
  
  
  
  
  

  return 0;
}