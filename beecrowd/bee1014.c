#include <stdio.h>
 
int main() {
  int X;
  double Y;
  
  scanf("%d", &X);
  scanf("%lf", &Y);
  
  double response = X / Y;
  
  printf("%.3lf km/l\n", response);

  return 0;
}