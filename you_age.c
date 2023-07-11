#include <stdio.h>

int main(void)
{
  int yourAge;

  printf("Hello World in X Language\n \n");
  printf("Type your age:\n");

  scanf("%d", &yourAge);
  // printf("\nYour Age is %d\n", yourAge);

  if (yourAge == 0)
  {
    printf("\nYou is not alive, bro!\n");
  }

  if (yourAge < 13)
  {
    printf("\nYour are a Children\n");
  }

  if (yourAge > 13 && yourAge < 18)
  {
    printf("\nYour are a Teen\n");
  }

  if (yourAge >= 18 && yourAge < 99)
  {
    printf("\nYour are an Adult\n");
  }

  if (yourAge > 99)
  {
    printf("\nWow, so old!\n");
  }

  return 0;
}