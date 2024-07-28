#include <stdio.h>

#define PI 3.14

int main(void)
{
	// const float pi = 3.14;

	float raio;
	float area;

	printf("\n Digite o raio: \n");
	scanf("%f", &raio);

	area = PI * raio * raio;

	printf("\n Sua área é %.2f\n", area);

	return 0;
}