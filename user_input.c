#include <stdio.h>

int main()
{
	char firstName[30];

	printf("Olá, qual seu primeiro nome? \n");

	scanf("%s", &firstName);

	printf("Seja bem-vindo(a), %s.", firstName);
	return 0;
}
