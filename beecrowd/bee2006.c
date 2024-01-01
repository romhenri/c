#include <stdio.h>
 
int main() {
  int score = 0;
  int response, a, b, c, d, e;
  
  scanf("%d", &response);
  scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
  
  if (a == response) score+=1;
  if (b == response) score+=1;
  if (c == response) score+=1;
  if (d == response) score+=1;
  if (e == response) score+=1;
  
  printf("%d\n", score);
  return 0;
}