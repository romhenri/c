#include <stdio.h>

int main() {
  int N, value;

  scanf("%d", &N);

  value = N;
  for(int i = (value -1); i > 0; i--) {
    value = value * i;
    // printf("i: %d, value: %d\n", i, value);
  }

  printf("%d\n", value);
  return 0;
}