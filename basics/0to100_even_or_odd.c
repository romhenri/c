#include <stdio.h>

int main(void)
{

	printf("\nPares: ");

	int max = 101;

	for (int n = 0; n < max; ++n)
	{

		if (n == (max - 1))
		{
			printf("%d.", n);
		}
		else if ((n % 2) == 0)
		{
			printf("%d, ", n);
		}
	};

	printf("\n\nImpares: ");

	for (int n = 0; n < 101; ++n)
	{
		if (n == (max - 2))
		{
			printf("%d.", n);
		}
		else if ((n % 2) == 1)
		{
			printf("%d, ", n);
		}
	};

	return 0;
}