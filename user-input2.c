#include <stdio.h>

int main()
{
	char fullName[60];

	printf("Olá, qual seu nome completo? \n");

	fgets(fullName, sizeof(fullName), stdin);

	printf("Seja bem-vindo(a), %s", fullName);

	return 0;
}
