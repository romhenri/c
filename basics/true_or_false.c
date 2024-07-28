#include <stdio.h>

int main(void)
{
	int valor1;
	int valor2;
	int valor3;
	int valor4;

	valor1 = (1 + 1 != 0 * 5) || (2 == 5);
	// (1 + 1 != 0 * 5) || (2 == 5)
	// (1 + 1 != 0) || (2 == 5)
	// (2 != 0) || (2 == 5)
	// (true) || (false)
	// true

	valor2 = (1 + 1 != 0 * 5) && (2 == 5);
	// (1 + 1 != 0 * 5) && (2 == 5)
	// (1 + 1 != 0) && (2 == 5)
	// (2 != 0) && (2 == 5)
	// (true) && (false)
	// true

	valor3 = !(1 + 1 == 3);
	// !(false)
	// true

	valor4 = !(!(!(1 + 1 == 2)));
	// !(!(!(1 + 1 == 2)))
	// !(!(!(2 == 2)))
	// !(!(!(true)))
	// !(!(false))
	// !(true)
	// false

	printf("O valor1 é: %d \n", valor1);
	printf("O valor2 é: %d \n", valor2);
	printf("O valor3 é: %d \n", valor3);
	printf("O valor4 é: %d \n", valor4);
}