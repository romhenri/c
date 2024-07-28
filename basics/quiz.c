#include <stdio.h>

int main(void)
{
	int score = 0;

	int response1;
	int response2;
	int response3;
	int response4;
	int response5;

	printf("\nA linguagem C é interpretada?\n");
	scanf("%d", &response1);

	printf("\nA lógica de um algoritmo é as etapas estarem ordenadas.\n");
	scanf("%d", &response2);

	printf("\nA linguagem C é a mesma coisa que C#\n");
	scanf("%d", &response3);

	printf("\nOs comentários de linha única em C são colocados APENAS com apenas "
				 "barra barra? \n");
	scanf("%d", &response4);

	printf("\nA linguagem C não tem o tipo de dado booleano. \n");
	scanf("%d", &response5);

	if (response1 == 0)
	{
		score = score + 1;
	}
	if (response2 == 1)
	{
		score = score + 1;
	}

	if (response3 == 0)
	{
		score = score + 1;
	}
	if (response4 == 0)
	{
		score = score + 1;
	}
	if (response5 == 1)
	{
		score = score + 1;
	}

	printf("\n Sua pontuação é de %d/5", score);
}