#include <stdio.h>
 
int main() {
  int C, P, F;
  
  scanf("%d %d %d",&C,&P,&F);
  
  int amountByPlayer = P/C;
  
  if (amountByPlayer>=F) {
    printf("S");
  } else {
    printf("N");
  }
  printf("\n");
  return 0;
}