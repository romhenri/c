#include <stdio.h>
 
int main() {
  int P, N, size = 0, auxSize = 0, win = 1;
  
  scanf("%d %d", &P, &N);
  
  for (int i = 1; i <= N; i++) {
    auxSize = size;
    scanf("%d", &size);

    if (auxSize == 0) {
      win = 1;
    }
    else if (size > auxSize) {
      if (size - auxSize > P) {
        win = 0;
      }
    } else if (auxSize > size) {
      if (auxSize - size > P) {
        win = 0;
      }
    }
  }
  
  if (win == 1) {
    printf("YOU WIN\n");
  } else if (win == 0) {
    printf("GAME OVER\n");
  }
  return 0;
}