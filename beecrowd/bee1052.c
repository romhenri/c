#include <stdio.h>
 
int main() {
  int n;
  char *arr[] = {
    "-", "January", "February", "March", "April", "May",
    "June", "July", "August", "September", "October",
    "November", "December"
  };
  
  scanf("%d", &n);
  
  printf("%s\n", arr[n]);
  return 0;
}