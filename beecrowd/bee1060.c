#include <stdio.h>
 
int main() {
  int positiveNumbers = 0;
  
  for(int i = 1; i <= 6; i++) {
    float n;
    scanf("%f", &n);
      
    if (n > 0) {
      positiveNumbers++;
    }
  }
  
  printf("%d valores positivos\n", positiveNumbers);
  return 0;
}