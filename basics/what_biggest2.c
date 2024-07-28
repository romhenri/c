#include <stdio.h>

int what_biggest(int arr[])
{
	int biggest = -1;

	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > biggest)
		{
			biggest = arr[i];
		}
	}

	return biggest;
};

int main(void)
{
	int arr[5] = {0};

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d, ", arr[i]);
	}

	int biggest = what_biggest(arr);
	printf("\nbiggest: %d\n", biggest);

	return 0;
}
