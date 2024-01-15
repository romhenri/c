#include <stdio.h>

int main() {
  int C, N;

  scanf("%d %d", &C, &N);

  int rest = C % N;

  printf("%d\n", rest);
  return 0;
}