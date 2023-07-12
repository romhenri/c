#include <stdio.h>

int last_number = 0;
int current_number = 1;

void next_number()
{
	// printf("%d &", last_number);
	// printf(" %d\n", current_number);

	int initial_current_number = current_number; // 1 = 1

	current_number = current_number + last_number; // 1 => 1 + 0

	last_number = initial_current_number; // 0 => 1

	printf("%d\n", current_number);
}

int main()
{
	int order_number;

	printf("Digite até que posição da Sequência de Fibonacci você deseja calcular:\n");
	scanf("%d", &order_number);
	printf("\n");

	for (int i = 0; i <= order_number; i++)
	{
		next_number();
	}

	return 0;
}