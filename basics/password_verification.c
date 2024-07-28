#include <stdio.h>

int main(void)
{

	int user_input;
	int password = 122333;

	printf("Digite a senha: \n");

	for (int n = 0; 1; ++n)
	{

		scanf("%d", &user_input);

		if (user_input == password)
		{
			printf("\nAcesso Permitido!");
			break;
		}

		printf("\nAcesso Negado!\n\n");
	}
	return 0;
}