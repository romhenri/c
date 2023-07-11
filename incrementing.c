#include <stdio.h>

int main(void)
{
	int number = 0;

	printf("\n%d", number);

	number++;

	printf("\n%d", number);

	number += 1; // Não está incremetando, está definindo...

	printf("\n%d", number);

	number = number + 1;

	printf("\n%d\n", number);

	number = number + 1;

	printf("\n%d", number);

	number++;

	printf("\n%d", number);

	number++;

	printf("\n%d", number);

	return 0;
}