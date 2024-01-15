#include <stdio.h>

int main() {
  int N;

  scanf("%d", &N);

  int seconds = N % 60;
  int minutes = N / 60;
  int hours = minutes / 60;
  minutes = minutes % 60;

  printf("%d:%d:%d\n", hours, minutes, seconds);
  return 0;
}