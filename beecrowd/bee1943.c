#include <stdio.h>
 
int main() {
  int K;
  
  scanf("%d", &K);
  
  if (K > 50) {
    printf("Top 100");
  } else if (K > 25) {
    printf("Top 50");
  } else if (K > 10) {
    printf("Top 25");
  } else if (K > 5) {
    printf("Top 10");
  } else if (K > 3) {
    printf("Top 5");
  } else if (K > 1) {
    printf("Top 3");
  } else {
    printf("Top 1");
  }
  
  printf("\n");
  return 0;
}