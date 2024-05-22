#include <stdio.h>
#include <stdlib.h>

int main() {
  int opcao = 0;

  do {
    int deu_certo = system("clear");
    printf("MEU JOGO\n");
    printf("1 - Iniciar\n");
    printf("2 - Resultado\n");
    printf("3 - Ajuda\n");
    printf("4 - Sair\n");
    printf("Escolha uma opcao =>");
    deu_certo = scanf("%i", &opcao);
    if (!deu_certo) opcao = 0;
    while (getchar() != '\n')
      ;

    switch (opcao) {
    case 1: {
      deu_certo = system("clear");
      char nome[31];
      printf("Nome do jogar: ");
      deu_certo = scanf("%[^\n]s", nome);
      printf("Ola %s\n", nome);
      printf("Pressione ENTER p/ iniciar\n");
      getchar();
      break;
    }
    case 2: {
      deu_certo = system("clear");
      printf("Resultado\n");
      printf("1o lugar - Jose   - 1000\n");
      printf("2o lugar - Maria  - 1000\n");
      printf("3o lugar - Pedro  - 1000\n");
      printf("4o lugar - Ana    - 1000\n");
      printf("5o lugar - Mateus - 1000\n");
      printf("Pressione ENTER p/ voltar");
      getchar();
    } break;
    case 3:
      break;
    case 4:
      break;
    default:
      printf("Opcao invalida! pressione ENTER p/ continuar");
      getchar();
    }
  } while (opcao != 4);

  return 0;
}