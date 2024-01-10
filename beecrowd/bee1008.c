#include <stdio.h>
 
int main() {
  int numberId, hours;
  float pay;

  scanf("%d", &numberId);
  scanf("%d", &hours);
  scanf("%f", &pay);

  float SALARY = hours * pay;
  
  printf("NUMBER = %d\n", numberId);
  printf("SALARY = U$ %.2f\n", SALARY);
}