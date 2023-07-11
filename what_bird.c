#include <stdio.h>

int main(void)
{

	int bird_fly;
	int bird_swim;
	int big_peak;
	int small_peak;

	printf("Classificador de Aves.\n");
	printf("\n1 - Sim \n0 - Não\n");
	printf("\nA Ave voa?\n");
	scanf("%d", &bird_fly);

	// Voa
	if (bird_fly == 1)
	{
		printf("\nTem bico grande?\n");
		scanf("%d", &big_peak);

		if (big_peak == 1)
		{
			printf("\nTudo indica que trata-se de um Tucano!\n");
		}
		else
		{
			printf("\nTem bico pequeno?\n");
			scanf("%d", &small_peak);

			if (small_peak == 1)
			{
				printf("\nTudo indica que trata-se de uma Arara!\n");
			}
			else
			{
				printf("\nTudo indica que trata-se de um Urubu!\n");
			}
		}

		// Não Voa
	}
	else if (bird_fly == 0)
	{
		printf("\nAve que não voa kkj\n");

		printf("\nA ave nada?\n");
		scanf("%d", &bird_swim);

		if (bird_swim == 1)
		{
			printf("\nTudo indica que trata-se de uma Penguim!\n");
		}
		else if (bird_swim == 0)
		{
			printf("\nTudo indica que trata-se de uma Galinha!\n");
		}
	}

	return 0;
}