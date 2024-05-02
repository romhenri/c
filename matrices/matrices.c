#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mostraVetor(int vetor[3]) {
  printf("\n");
  for (int i = 0; i < 3; i++) {
    printf("%d ", vetor[i]);
  }
}

void mostraMatriz(int matriz[3][3]) {
  printf("Matriz: \n\n");

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d  ", matriz[i][j]);
    }
    printf("\n");
  }
}

void geraMatriz(int matriz[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matriz[i][j] = rand() % 10;
    }
  }
}

int main(void) {
  srand(time(NULL)); // use current time as seed for random generator

  // print time(null)
  printf("The current time is: %ld\n", time(NULL));

  int random_variable = rand();
  int m[3][3], biggest, i, j;
  int mainDia[3];

  geraMatriz(m);
  mostraMatriz(m);
  return 0;
}