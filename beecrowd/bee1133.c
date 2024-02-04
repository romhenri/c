#include <stdio.h>
 
int main() {
  int X, Y, initial, final;

  scanf("%d %d", &X, &Y);

  if (Y > X) {
    initial = X + 1;
    final = Y;
  } else {
    initial = Y + 1;
    final = X;
  }

  for (int i = initial; i <= final; i++) {
    if (i % 5 == 2 || i % 5 == 3) {
      printf("%d\n", i);
    }
  }

  return 0;
}