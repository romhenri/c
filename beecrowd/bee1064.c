#include <stdio.h>
 
int main() {
  int positiveNumbers = 0;
  float sum = 0;
  
  for(int i = 1; i <= 6; i++) {
    float n;
    scanf("%f", &n);
    
    if (n > 0) {
      positiveNumbers++;
      sum = sum + n;
    }
  }
  float average = sum / positiveNumbers;
  
  printf("%d valores positivos\n", positiveNumbers);
  printf("%.1f\n", average);
  return 0;
}