#include <stdio.h>

int main() {
  int array[3];
  int biggest = 0;

  scanf("%d", &array[0]);
  scanf("%d", &array[1]);
  scanf("%d", &array[2]);

  for (int i = 0; i < 3; i++) {
    if (array[i] > biggest) {
      biggest = array[i];
    }
  }

  printf("%d eh o maior\n", biggest);
  return 0;
}