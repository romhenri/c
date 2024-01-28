#include <stdio.h>
 
int main() {
  int N;
  int evenNumber = 0;
  
  for (int i = 1; i <= 5; i++) {
    scanf("%d", &N);
    
    if (N % 2 == 0) {
      evenNumber++; 
    }
  }
    
  printf("%d valores pares\n", evenNumber);
  return 0;
}