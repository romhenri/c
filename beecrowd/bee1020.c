#include <stdio.h>
 
int main() {
  int N;
  
  scanf("%d", &N);
  
  int years = N / 365;
  int months = (N % 365) / 30;
  int days = ((N % 365) % 30);

  printf("%d ano(s)\n", years);
  printf("%d mes(es)\n", months);
  printf("%d dia(s)\n", days);
}