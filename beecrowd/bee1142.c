#include <stdio.h>
 
int main() {
  int N;
  int number = 1;
  
  scanf("%d", &N);
  
  for(int i = 1; i <= N; i++) {
    printf("%d %d %d PUM\n", number, number+1, number+2);
    number = number + 4;
  }
  return 0;
}