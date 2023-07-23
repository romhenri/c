#include <stdio.h>

int main()
{
	FILE *fptr;
	// Lembrar que o path é relativo a execução;
	// Ele deve ser pensado para o código compilado e não o arquivo em C;
	fptr = fopen("../files/test2.txt", "a");

	// "w" para Escrever - "Write";
	// "a" para Acrescentar - "Appends";
	// "r" para Ler - "Read";

	for (size_t i = 1; i <= 1000; i++)
	{
		fprintf(fptr, "\nHello, world! (nº %d)", i);
	}

	fclose(fptr);
	return 0;
}
