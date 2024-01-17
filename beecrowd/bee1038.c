#include <stdio.h>
 
int main() {
  int item, amount;
  float total;
  
  scanf("%d %d", &item, &amount);
  
  if (item == 1) {
    total = amount * 4.00;
  } else
  if (item == 2) {
    total = amount * 4.50;
  } else
  if (item == 3) {
    total = amount * 5.00;
  } else
  if (item == 4) {
    total = amount * 2.00;
  } else {
    total = amount * 1.50;
  }
  
  printf("Total: R$ %.2f\n", total);
  return 0;
}