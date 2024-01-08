#include <stdio.h>
 
int main() {
  float A, B, C;

  scanf("%f", &A);
  scanf("%f", &B);
  scanf("%f", &C);

  double MEDIA = ((A * 2) + (B * 3) + (C * 5)) / 10;
  printf("MEDIA = %.1lf\n", MEDIA);
}