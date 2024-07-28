#include <math.h>
#include <stdio.h>

int main(void)
{

	int value_A;
	int value_B;
	int value_C;

	int diviser;

	int x1part;
	int x2part;
	int x1;
	int x2;

	int delta;

	printf("Digite os valores:\n");

	printf("\nA:");
	scanf("%d", &value_A);

	printf("B:");
	scanf("%d", &value_B);

	printf("C:");
	scanf("%d", &value_C);

	if (value_A <= 0)
	{
		printf("\nO valor A deve ser maior que 0!\n");
	}

	delta = (pow(value_B, 2)) - 4 * (value_A * value_C);

	printf("\n");
	printf("Delta é %d\n", delta);

	x1part = -value_B + (sqrt(delta));
	x2part = -value_B - (sqrt(delta));

	// Antes da Divisão
	// printf("\nx1 é %d", x1part);
	// printf("\nx2 é %d", x2part);

	diviser = value_A * 2;

	x1 = x1part / diviser;
	x2 = x2part / diviser;

	printf("\nx1 é %d", x1);
	printf("\nx2 é %d", x2);

	return 0;
}