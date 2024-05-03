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

void maiorValor(int matriz[][3]) {
  int maior = 0, posI = 0, posJ = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (matriz[i][j] > maior) {
        maior = matriz[i][j];
        posI = i;
        posJ = j;
      }
    }
  }
  printf("\nO maior valor da matriz é %d\n", maior);
  printf("Posição: [%d][%d]\n", posI, posJ);
}

void somaMatriz(int matriz[3][3]) {
  int soma = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      soma += matriz[i][j];
    }
  }

  printf("\nA soma dos valores da matriz é %d\n", soma);
}

void somaDiagonalPrincipal(int matriz[3][3]) {
  int soma = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (i == j) {
        soma += matriz[i][j];
      }
    }
  }

  printf("\nA soma da diagonal principal é %d\n", soma);
}

void somaDiagonalSecundaria(int matriz[3][3]) {
  int soma = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (i + j == 2) {
        soma += matriz[i][j];
      }
    }
  }

  printf("\nA soma da diagonal secundária é %d\n", soma);
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
  maiorValor(m);
  somaDiagonalPrincipal(m);
  somaDiagonalSecundaria(m);
  somaMatriz(m);
  return 0;
}