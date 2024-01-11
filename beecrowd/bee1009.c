#include <stdio.h>
 
int main() {
  char name[30];
  double salary, sales;

  scanf("%s", name);
  scanf("%lf", &salary);
  scanf("%lf", &sales);

  double extra = sales * 0.15;
  double TOTAL = salary + extra;
  
  printf("TOTAL = R$ %.2lf\n", TOTAL);
}