#include <stdio.h>

int main(){
  float boletim[10][3];

  for(int i=0; i<10; i++){
    for(int j=0; j<2; j++){
      printf("Entre com a nota %i do aluno %i: ", j, i);
      int deu_certo = scanf("%f", &boletim[i][j]);
    }
    boletim[i][2] = 0.4f * boletim[i][0] + 0.6f * boletim[i][1];
  }

  printf("\n B O L E T I M  D E  N O T A S \n");
  printf("Nota1 Nota2 Media\n");
  for(int i=0; i<10; i++){
    for(int j=0; j<3; j++){
      printf("%5.1f", boletim [i][j]);
    }
    printf("\n");
  }
  return 0;
}