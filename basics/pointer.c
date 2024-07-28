#include <stdio.h>

int main(void)
{
	int *x, valor, y;

	valor = 35;
	x = &valor;
	y = *x;

	printf("\nEndereço da variável valor: %p\n", &valor);
	printf("\nConteúdo da variável x: %p\n", x);
	printf("\nEndereço da variável x: %p\n", &x);
	printf("\nEndereço da variável y: %p\n", &y);
	printf("\nConteúdo da apontada por x: %d\n", *x);
	printf("\nConteúdo da variável y: %d\n", y);

	// * é de REDIRECIONAMENTO ou DIREÇÃO
	// & é de ENDEREÇO

	printf("\n");
	return 0;
}
