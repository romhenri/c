#include <stdio.h>
 
int main() {
  int start, end, time;
  
  scanf("%d %d", &start, &end);
  
  if (start > end) {
    int aux = 24 - start;
    time = aux + end;
  } else if (start == end) {
    time = 24;
  } else {
    time = end - start;
  }
      
  printf("O JOGO DUROU %d HORA(S)\n", time);
  return 0;
}