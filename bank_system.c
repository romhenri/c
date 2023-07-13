#include <stdio.h>

int balance = 1000;

int main()
{
	printf("Seu saldo é de: R$ %d\n", balance);
	increase_balance();

	return 0;
}

void increase_balance()
{
	int put_value;

	printf("Quanto deseja depositar?\n");
	scanf("%d", &put_value);
	printf("\n");

	balance += put_value;

	main();
}