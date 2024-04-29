#include <stdio.h>

#define T 3

int main(void) {
  int A[T], B[T], C[T];

  for (int i = 0; i < T; i++) {
    printf("Digite o valor de A[%d]: ", i);
    scanf("%d", &A[i]);
  }
  printf("\n");

  for (int i = 0; i < T; i++) {
    printf("Digite o valor de B[%d]: ", i);
    scanf("%d", &B[i]);
  }
  printf("\n");

  for (int i = 0; i < T; i++) {
    C[i] = A[i] + B[i];
  }

  printf("Soma dos Vetores:\n");
  for (int i = 0; i < T; i++) {
    printf("C[%d] = %d\n", i, C[i]);
  }
  printf("\n");
  return 0;
}