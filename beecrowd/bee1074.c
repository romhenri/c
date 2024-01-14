#include <stdio.h>
 
int main() {
  int N;
  
  scanf("%d", &N);
  
  for(int i = 1; i <= N; i++) {
    int number;
    scanf("%d", &number);
    
    if (number == 0) {
      printf("NULL\n");
    } 
    else if (number % 2 == 0) {
      if (number > 0) {
        printf("EVEN POSITIVE\n");
      } else {
        printf("EVEN NEGATIVE\n");
      }
    }
    else {
      if (number > 0) {
        printf("ODD POSITIVE\n");
      } else {
        printf("ODD NEGATIVE\n");
      }
    }
  }
  return 0;
}