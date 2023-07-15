#include <stdio.h>

int number;
int cont, contA, contB, aux;
int vet[3];

int main()
{
	for (cont = 0; cont <= 2; cont++)
	{
		printf("Digite um número: \n");
		scanf("%d", &vet[cont]);
	}

	for (contA = 0; contA <= 2; contA++)
	{
		for (contB = contA + 1; contB <= 2; contB++)
		{
			if (vet[contA] > vet[contB])
			{
				aux = vet[contB];
				vet[contB] = vet[contA];
				vet[contA] = aux;
			}
		}
	}

	printf("Em ordem:\n");

	for (cont = 0; cont <= 2; cont++)
	{
		printf("%d, ", vet[cont]);
	}

	return 0;
}
