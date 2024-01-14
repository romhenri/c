#include <stdio.h>
 
int main() {
  int N;
  
  scanf("%d", &N);
  
  if (N >= 86) {
    printf("A");
  } else
  if (N >= 61) {
    printf("B");
  } else
  if (N >= 36) {
    printf("C");
  } else
  if (N >= 1) {
    printf("D");
  } else {
    printf("E");
  }
  printf("\n");
  return 0;
}