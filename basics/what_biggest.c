#include <stdio.h>

int main(void)
{
	printf("Comparador de Valores, digite opções e organizo maior e menor!\n");

	int biggest = 0;
	int smallest = 0;

	int option1;
	int option2;
	int option3;

	printf("\nDigite cada uma das 3 opções:\n");
	scanf("%d", &option1);
	scanf("%d", &option2);
	scanf("%d", &option3);

	if (option1 == option2 || option2 == option3 || option3 == option1)
	{
		printf("Há Números Iguais! por favor corrija.");
		return 0;
	}

	if (option1 > option2 && option1 > option3)
	{
		biggest = option1;
	}
	else if (option2 > option1 && option2 > option3)
	{
		biggest = option2;
	}
	else if (option3 > option1 && option3 > option2)
	{
		biggest = option3;
	}

	if (option1 < option2 && option1 < option3)
	{
		smallest = option1;
	}
	else if (option2 < option1 && option2 < option3)
	{
		smallest = option2;
	}
	else if (option3 < option1 && option3 < option2)
	{
		smallest = option3;
	}

	// printf("%d", biggest);
	// printf("%d", smallest);

	printf("\nO maior número é o %d", biggest);
	printf("\nO menor número é o %d", smallest);

	return 0;
}