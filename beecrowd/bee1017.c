#include <stdio.h>
 
int main() {
  int time, speed;
  
  scanf("%d %d", &time, &speed);
  
  float distance = time * speed;
  float gasRequired = distance / 12; 

  printf("%.3f\n", gasRequired);
  return 0;
}