#include <stdio.h>

int main(void) {
  double r;

  scanf("%lf", &r);
  double area = 3.14159 * r * r;

  printf("A=%.4lf\n", area);
  return 0;
}