#include <stdio.h>
 
int main() {
  int N, X = 0, Y = 1;
  
  scanf("%d", &N);
  printf("%d ", X);
  printf("%d ", Y);
  
  for (int i=1; i<=N-2; i++) {
    printf("%d", X + Y);
    
    int auxY = Y;
    Y = X + Y;
    X = auxY;
    
    if (i==N-2) {
      printf("\n");
    } else {
      printf(" "); 
    }
  }
  return 0;
}