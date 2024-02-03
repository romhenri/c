#include <stdio.h>
 
int main() {
  int evens=0, odds=0, positives=0, negatives=0;
  int N;
  
  for (int i = 1; i<=5; i++) {
    scanf("%d", &N);
    
    // Even or Odd
    if (N % 2 == 0) {
      evens++;
    } else {
      odds++;
    }
    
    // Positive or Negative
    if (N > 0) {
      positives++;
    } else if (N < 0){
      negatives++;
    }
  }
  
  printf("%d valor(es) par(es)\n", evens);
  printf("%d valor(es) impar(es)\n", odds);
  printf("%d valor(es) positivo(s)\n", positives);
  printf("%d valor(es) negativo(s)\n", negatives);
  return 0;
}