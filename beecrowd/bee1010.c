#include <stdio.h>

int main() {
  int code, amount, code2, amount2;
  float price, price2;

  scanf("%d %d %f", &code, &amount, &price);
  scanf("%d %d %f", &code2, &amount2, &price2);

  float total = (amount * price) + (amount2 * price2);

  printf("VALOR A PAGAR: R$ %.2f\n", total);
  return 0;
}