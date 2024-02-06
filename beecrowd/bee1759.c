#include <stdio.h>
 
int main() {
  int N;

  scanf("%d", &N);
  
  for (int i = 1; i <=N; i++) {
    if (i == 1) {
      printf("Ho");
    } else printf(" Ho");
  }
  printf("!\n");
  return 0;
}