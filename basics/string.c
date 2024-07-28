#include <stdio.h>

int main(void)
{
	char string[20] = "Hello World!";

	printf("%s\n", string); // Está correto.

	// printf(string); // Está errado.
	// Nesse uso, o ideal é usar "puts" (put string).

	puts(string); // Está correto.

	return 0;
}