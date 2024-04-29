#include <stdio.h>

#define T 3

int *inverte(int vetor[], int tamanho) {
  int inverted[tamanho];
  int aux;

  for (int i = 0; i < tamanho; i++) {
    // Assim para cada posição inicial do novo,
    // ele recebe os finais do antigo
    inverted[i] = vetor[tamanho - 1 - i];
  }
  return inverted;
}

int main(void) {
  int vetor[T], *newVetor;

  for (int i = 0; i < T; i++) {
    printf("Digite o %dº número: ", i + 1);
    scanf("%d", &vetor[i]);
  }
  printf("\n");

  newVetor = inverte(vetor, T);

  for (int i = 0; i < T; i++) {
    printf("%d ", newVetor[i]);
  }

  return 0;
}